#include "scketchwnd.h"
#include "ui_scketchwnd.h"
#include "question.h"
#include <QLabel>
#include <QBuffer>
#include <QSqlQuery>

ScketchWnd::ScketchWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScketchWnd),
    db(SqlDBManeger::getInstance()),
    qstn(new Question()),
    sketch(new Sketch())
{
    ui->setupUi(this);
    db->connectToDataBase();
    connect(ui->addPb, &QPushButton::clicked, this, &ScketchWnd::loadImage);
    connect(this, &ScketchWnd::add, qstn, &Question::addScetch);
    currentIndexStckW=0;
    updateImage();
}


ScketchWnd::~ScketchWnd()
{
    delete ui;
}

void ScketchWnd::loadImage()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Виберіть зображення", "", "Зображення (*.png *.jpg *.bmp)");
    if (!filePath.isEmpty()) {
        QImage image(filePath);
        if (!image.isNull()) {
            QByteArray imageData;
            QBuffer buffer(&imageData);
            buffer.open(QIODevice::WriteOnly);
            image.save(&buffer, "PNG");



            qstn->show();
            emit add(imageData, 5);
            connect(qstn,&Question::closeWndSketch, this, &ScketchWnd::closeQstn);

            loadImageFromByteArray(sketch,"active");
        }
    }
}

void ScketchWnd::updateImage()
{
    qDeleteAll(imageLabels);
    imageLabels.clear();

    QSqlQuery query;
    query.exec("SELECT sketches.sketches, sketches.name,sketches.price, sketches.status  FROM sketches");
    while (query.next()) {
        QByteArray imageData = query.value("sketches.sketches").toByteArray();
        QString name = query.value("sketches.name").toString();
        float price = query.value("sketches.price").toFloat();
        QString status = query.value("sketches.status").toString();
        sketch =new Sketch(imageData,name,price);
        loadImageFromByteArray(sketch,status);
    }
}

void ScketchWnd::loadImageFromByteArray(Sketch *sketch,QString statusSkt)
{
    QLabel *imageLabel = new QLabel(ui->sketchStckW);
    imageLabel->setFixedSize(300, 300);
    imageLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    QPixmap image;
    image.loadFromData(sketch->getImage());
    image = image.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    imageLabel->setPixmap(image);

    QWidget *sketchWidget = new QWidget();
    QVBoxLayout *sketchLayout = new QVBoxLayout(sketchWidget);

    QLabel *nameLabel = new QLabel(sketch->getName());
    nameLabel->setAlignment(Qt::AlignCenter);


    QLabel *priceLabel = new QLabel(QString::number(sketch->getPrice()));
    priceLabel->setAlignment(Qt::AlignCenter);

    QLabel *status = new QLabel(statusSkt);
    status->setAlignment(Qt::AlignCenter);



    sketchLayout->addWidget(imageLabel);
    sketchLayout->addWidget(nameLabel);
    sketchLayout->addWidget(priceLabel);
    sketchLayout->addWidget(status);
    sketchLayout->setAlignment(Qt::AlignCenter);
    ui->sketchStckW->insertWidget(ui->sketchStckW->count() - 1, sketchWidget);

}
void ScketchWnd::closeQstn(Sketch *sketch)
{
    this->sketch =sketch;
    qstn->close();
}

void ScketchWnd::on_nextPb_clicked()
{
    if (currentIndexStckW < ui->sketchStckW->count() - 1)
    {
        currentIndexStckW++;
        ui->sketchStckW->setCurrentIndex(currentIndexStckW);
    }
    else
    {
        currentIndexStckW=0;
        ui->sketchStckW->setCurrentIndex(currentIndexStckW);
    }
}


void ScketchWnd::on_backPb_clicked()
{
    if (currentIndexStckW > 0) {
        currentIndexStckW--;
        ui->sketchStckW->setCurrentIndex(currentIndexStckW);
    }
    else
    {
       currentIndexStckW= ui->sketchStckW->count() - 1;
       ui->sketchStckW->setCurrentIndex(currentIndexStckW);
    }
}


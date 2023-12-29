#include "scketchwnd.h"
#include "ui_scketchwnd.h"
#include "question.h"
#include <QLabel>
#include <QBuffer>
#include <QSqlQuery>
#include <QMessageBox>
ScketchWnd::ScketchWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScketchWnd),
    db(SqlDBManeger::getInstance()),
    sketch(new Sketch())
{
    qstn =new Question();
    ui->setupUi(this);
    db->connectToDataBase();
    connect(ui->addPb, &QPushButton::clicked, this, &ScketchWnd::loadImage);
    connect(this, &ScketchWnd::add, qstn, &Question::addScetch);
    currentIndexStckW=0;
    updateImage();
     connect(qstn,&Question::closeWndSketch, this, &ScketchWnd::closeQstn);
}


ScketchWnd::~ScketchWnd()
{
    delete ui;
}

void ScketchWnd::loadImage()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select the image", "", "image (*.png *.jpg *.bmp)");
    if (!filePath.isEmpty()) {
        QImage image(filePath);
        if (!image.isNull()) {
            QByteArray imageData;
            QBuffer buffer(&imageData);
            buffer.open(QIODevice::WriteOnly);
            image.save(&buffer, "PNG");



            qstn->show();
            emit add(imageData, 5);

            loadImageFromByteArray(sketch,"active");
        }
    }
}

void ScketchWnd::updateImage()
{
    QSqlQuery query;
    query.exec("SELECT sketches.sketches, sketches.name,sketches.price, sketches.status  FROM sketches");
    while (query.next()) {
        QByteArray imageData = query.value("sketches.sketches").toByteArray();
        QString name = query.value("sketches.name").toString();
        float price = query.value("sketches.price").toFloat();
        QString status = query.value("sketches.status").toString();
        sketch =new Sketch(imageData,name,price);
        sketchesV.push_back(sketch);
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


    QLabel *priceLabel = new QLabel(QString::number(sketch->getPrice())+"grn");
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
    while (ui->sketchStckW->count() > 0) {
        QWidget* widgetToRemove = ui->sketchStckW->widget(0);
        ui->sketchStckW->removeWidget(widgetToRemove);
        delete widgetToRemove;
    }
    updateImage();
    qstn->close();
    delete qstn;
    qstn = nullptr;
    qstn = new Question();
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


void ScketchWnd::on_deletePb_clicked()
{
    if (currentIndexStckW >= 0 && currentIndexStckW < sketchesV.size()) {
       QString namestk = sketchesV[currentIndexStckW+1]->getName();
       QString idSketch = db->searchSketchId(namestk);
       db->deleteItem(idSketch,TABLE_SKETCH);
       while (ui->sketchStckW->count() > 0) {
            QWidget* widgetToRemove = ui->sketchStckW->widget(0);
            ui->sketchStckW->removeWidget(widgetToRemove);
            delete widgetToRemove;
       }
       updateImage();
       QMessageBox::about(this,"Delete","Delete sketch!");

    } else {
       qDebug() << "Invalid currentIndexImages or sketchesV is empty.";
    }
}


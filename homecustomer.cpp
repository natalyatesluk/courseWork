#include "homecustomer.h"
#include "ui_homecustomer.h"
#include <QSqlQuery>
#include <QMessageBox>
HomeCustomer::HomeCustomer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeCustomer),
    sketch(nullptr),
    currentIndexImages(0)
{
    ui->setupUi(this);
    ui->homeCusStckW->setCurrentIndex(0);
    ui->avatarStckW->setCurrentIndex(0);
    db=  SqlDBManeger::getInstance();
    updateImage();
    modelMaster = new QSqlTableModel(this, db->getDB());
    proxyMasterModel = new QSortFilterProxyModel(modelMaster);
    updateTableMasters();
    modelFree = new QSqlRelationalTableModel(this, db->getDB());
    proxyFreeModel = new QSortFilterProxyModel(modelFree);
    qstn = new Question();
    connect(this, &HomeCustomer::submitApp, qstn, &Question::submitApp);
    connect(qstn, &Question::closeWndStr, this, &HomeCustomer::closeQst);
}

HomeCustomer::~HomeCustomer()
{
    delete ui;
}

void HomeCustomer::on_changePb_clicked()
{
    ui->avatarStckW->setCurrentIndex(1);
}

void HomeCustomer::username(QString name)
{
    ui->usernameLb->setText(name);
}


void HomeCustomer::on_changeMenPb_clicked()
{
    QPixmap* men = new QPixmap(ui->mAvatarlb->pixmap().copy());
    if(men)
        ui->activeAvatarLb->setPixmap(*men);
    ui->avatarStckW->setCurrentIndex(0);
    delete men;
}


void HomeCustomer::on_changeWomenPb_clicked()
{
    QPixmap* women = new QPixmap(ui->wAvatarLb->pixmap().copy());
    if(women)
        ui->activeAvatarLb->setPixmap(*women);
    ui->avatarStckW->setCurrentIndex(0);
    delete women;
}

void HomeCustomer::on_mastersPb_clicked()
{
    updateTableMasters();
    ui->homeCusStckW->setCurrentIndex(1);
}


void HomeCustomer::on_freePb_clicked()
{
    ui->homeCusStckW->setCurrentIndex(2);
     updateTableTime();
}


void HomeCustomer::on_homePb_clicked()
{
     ui->homeCusStckW->setCurrentIndex(0);
}


void HomeCustomer::on_homeTPb_clicked()
{
      ui->homeCusStckW->setCurrentIndex(0);
}



void HomeCustomer::on_sketchPb_clicked()
{
      ui->homeCusStckW->setCurrentIndex(3);
      updateImage();
}

void HomeCustomer::loadImageFromByteArray(Sketch *sketch,QString statusSkt)
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

void HomeCustomer::updateImage()
{
      QSqlQuery query;
      query.exec("SELECT sketches.sketches, sketches.name,sketches.price, sketches.status  FROM sketches");
      while (query.next()) {
        QByteArray imageData = query.value("sketches.sketches").toByteArray();
        QString name = query.value("sketches.name").toString();
        float price = query.value("sketches.price").toFloat();
        QString* status = new QString(query.value("sketches.status").toString());
        sketch =new Sketch(imageData,name,price);
        sketchesV.push_back(sketch);
//        statusV.push_back(status);
        loadImageFromByteArray(sketch,*status);
//        delete sketch;
//        sketch = nullptr;
//        delete status;
//        status = nullptr;
      }
}


void HomeCustomer::on_nextPb_clicked()
{
      if (currentIndexImages < ui->sketchStckW->count() - 1)
      {
        currentIndexImages++;
        ui->sketchStckW->setCurrentIndex(currentIndexImages);
      }
      else
      {
        currentIndexImages=0;
        ui->sketchStckW->setCurrentIndex(currentIndexImages);
      }
}


void HomeCustomer::on_backPb_clicked()
{
      if (currentIndexImages > 0) {
        currentIndexImages--;
        ui->sketchStckW->setCurrentIndex(currentIndexImages);
      }
      else
      {
        currentIndexImages= ui->sketchStckW->count() - 1;
        ui->sketchStckW->setCurrentIndex(currentIndexImages);
      }
}


void HomeCustomer::on_homeSPb_clicked()
{
      ui->homeCusStckW->setCurrentIndex(0);
}

void HomeCustomer::updateTableMasters()
{
      modelMaster->setTable(TABLE_MASTER);
      modelMaster->select();
      proxyMasterModel->setSourceModel(modelMaster);
      proxyMasterModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
      proxyMasterModel->setFilterKeyColumn(-1);
      ui->masterTv->setModel(proxyMasterModel);
      ui->masterTv->horizontalHeader()->setStretchLastSection(true);
      ui->masterTv->setEditTriggers(QAbstractItemView::NoEditTriggers);

}
void HomeCustomer::updateTableTime()
{
      modelFree->setTable(TABLE_FREETIME);
      modelFree->setRelation(modelFree->fieldIndex(TABLE_MASTERid),QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
      modelFree->select();
      proxyFreeModel->setSourceModel(modelFree);
      proxyFreeModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
      proxyFreeModel->setFilterKeyColumn(-1);
      ui->timeTv->setModel(proxyFreeModel);
      ui->timeTv->horizontalHeader()->setStretchLastSection(true);
      ui->timeTv->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void HomeCustomer::closeQst(QString sketchId)
{
      this->sketchId= sketchId;
      db->updateStatusSketch(sketchId);
      while (ui->sketchStckW->count() > 0) {
        QWidget* widgetToRemove = ui->sketchStckW->widget(0);
        ui->sketchStckW->removeWidget(widgetToRemove);
        delete widgetToRemove;
      }
      sketchesV.clear();
      //statusV.clear();
      updateImage();
      qstn->close();

}


void HomeCustomer::on_searchLETime_textChanged(const QString &arg1)
{
     proxyFreeModel->setFilterFixedString(arg1);
}


void HomeCustomer::on_searchLEMaster_textChanged(const QString &arg1)
{
     proxyMasterModel->setFilterFixedString(arg1);
}


void HomeCustomer::on_selectPb_clicked()
{
     if (currentIndexImages >= 0 && currentIndexImages < sketchesV.size()) {
        qDebug()<<currentIndexImages;
        QString namestk = sketchesV[currentIndexImages+1]->getName();
        QString id_sketch = db->searchSketchId(namestk);
        qDebug() << "ID Sketch: " << id_sketch;
        QString status = db->searchStatusSketch(id_sketch);
        qDebug()<<status;
        if(status =="booked")
            QMessageBox::critical(this,"Problem","This sketch is booked");
        else{
        emit submitApp(6, namestk);
        qstn->show(); }
     }
        else {
        qDebug() << "Invalid currentIndexImages or sketchesV is empty.";
     }

}




void HomeCustomer::on_exitPB_clicked()
{
     emit exittHome();
}


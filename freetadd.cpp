#include "freetadd.h"
#include "ui_freetadd.h"
#include <QMessageBox>

FreeTAdd::FreeTAdd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FreeTAdd)
{
    ui->setupUi(this);
    ui->freeTStckW->setCurrentIndex(0);
    db= SqlDBManeger::getInstance();

    modelFree = new QSqlRelationalTableModel(this, db->getDB());
    proxyFreeModel = new QSortFilterProxyModel(modelFree);
    modelFree->setTable(TABLE_FREETIME);
    masterIndex = modelFree->fieldIndex(TABLE_MASTERid);
    modelFree->setRelation(masterIndex,QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    proxyFreeModel->setSourceModel(modelFree);
    qDebug() << "Master Relation Model: " << modelFree->relationModel(masterIndex);

    if (modelFree) {
        ui->mastersCb->setModel(modelFree->relationModel(masterIndex));
        ui->mastersCb->setModelColumn(modelFree->relationModel(masterIndex)->fieldIndex(TABLE_NAME));
    } else {
        qDebug() << "Error: modelFree is null.";
    }
    proxyFreeModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyFreeModel->setFilterKeyColumn(-1);
    ui->frTimeTv->setModel(proxyFreeModel);
    ui->frTimeTv->horizontalHeader()->setStretchLastSection(true);
    ui->frTimeTv->setEditTriggers(QAbstractItemView::NoEditTriggers);
    modelFree->setHeaderData(masterIndex, Qt::Horizontal, tr("master"));
    modelFree->select();

    question = new QuesForTime();
    connect(this, &FreeTAdd::transfer, question, &QuesForTime::transferToWork);
    connect(this, &FreeTAdd::deleteTime, question, &QuesForTime::deleteTime);
}

FreeTAdd::~FreeTAdd()
{
    delete ui;
}


void FreeTAdd::on_goAddPb_clicked()
{
    ui->freeTStckW->setCurrentIndex(1);
}


void FreeTAdd::on_showPb_clicked()
{
    ui->freeTStckW->setCurrentIndex(0);
}


void FreeTAdd::on_addPb_clicked()
{
    QDate selectedDate = ui->dateClnd->selectedDate();
    QTime selectedTime = ui->timeEdit->time();

    QString masterId = ui->mastersCb->currentText();
    qDebug() << "Selected Master: " << masterId;

    int id_master = db->searchMasterId(masterId);
    qDebug() << "ID Master: " << id_master;
    QString dateStr = selectedDate.toString("yyyy-MM-dd");
    QString timeStr = selectedTime.toString("hh:mm");
    if(!dateStr.isEmpty()&&!timeStr.isEmpty())
    {
        timeObg= new FreeTime(selectedDate,selectedTime,id_master);
        db->inserIntoTableFree(*timeObg);
         modelFree->select();
        QMessageBox::about(this,"Added","Greate added time!");
        delete timeObg;
        timeObg=nullptr;
    }
    else
         QMessageBox::critical(this,"Problem","There are empty lines here");
}


void FreeTAdd::on_frTimeTv_doubleClicked(const QModelIndex &index)
{
    int row = index.row();
     QString id=  ui->frTimeTv->model()->data(ui->frTimeTv->model()->index(row, 0)).toString();
     QString date=  ui->frTimeTv->model()->data(ui->frTimeTv->model()->index(row, 1)).toString();
     QString time= ui->frTimeTv->model()->data(ui->frTimeTv->model()->index(row, 2)).toString();
     QString masterId =ui->frTimeTv->model()->data(ui->frTimeTv->model()->index(row, 3)).toString();

     FreeTime *free= new FreeTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),masterId);
     emit transfer(free,id,0);
     emit deleteTime(id);
     question->show();
     connect(question, &QuesForTime::closeWnd, this, &FreeTAdd::closeQstn);
}

void FreeTAdd::closeQstn()
{
     question->close();
     modelFree->select();
     delete question;
     question= nullptr;
     question = new QuesForTime();
}


void FreeTAdd::on_searchLE_textChanged(const QString &arg1)
{
     proxyFreeModel->setFilterFixedString(arg1);
}


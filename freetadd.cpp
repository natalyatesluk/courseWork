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
    updateTable();
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

    QString masterId = ui->masteLE->text();
    QString dateStr = selectedDate.toString("yyyy-MM-dd");
    QString timeStr = selectedTime.toString("hh:mm");
    if(!masterId.isEmpty()&&!dateStr.isEmpty()&&!timeStr.isEmpty())
    {
        timeObg= new FreeTime(selectedDate,selectedTime,masterId.toInt());
        db->inserIntoTableFree(*timeObg);
        updateTable();
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
     int masterId =ui->frTimeTv->model()->data(ui->frTimeTv->model()->index(row, 3)).toInt();

     FreeTime *free= new FreeTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),masterId);
     emit transfer(free,id);
     emit deleteTime(id);
     question->show();
     connect(question, &QuesForTime::closeWnd, this, &FreeTAdd::closeQstn);
}

void FreeTAdd::closeQstn()
{
     question->close();
     updateTable();
}

void FreeTAdd::updateTable()
{
     modelFree->setTable(TABLE_FREETIME);
     modelFree->setRelation(modelFree->fieldIndex(TABLE_MASTERid),QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
     modelFree->select();
     proxyFreeModel->setSourceModel(modelFree);
     proxyFreeModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
     proxyFreeModel->setFilterKeyColumn(-1);
     ui->frTimeTv->setModel(proxyFreeModel);
     ui->frTimeTv->horizontalHeader()->setStretchLastSection(true);
     ui->frTimeTv->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void FreeTAdd::on_searchLE_textChanged(const QString &arg1)
{
     proxyFreeModel->setFilterFixedString(arg1);
}


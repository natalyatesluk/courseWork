#include "bodywnd.h"
#include "ui_bodywnd.h"
#include <QMessageBox>
BodyWnd::BodyWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BodyWnd)
{
    ui->setupUi(this);
    db= SqlDBManeger::getInstance();
    ques= new Question();

    bodyModel = new QSqlTableModel(this, db->getDB());
    proxyBodyModel = new QSortFilterProxyModel(this);
    bodyModel->setTable(TABLE_BODY);
    proxyBodyModel->setSourceModel(bodyModel);
    proxyBodyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyBodyModel->setFilterKeyColumn(-1);
    ui->bodyTv->setModel(proxyBodyModel);
    ui->bodyTv->horizontalHeader()->setStretchLastSection(true);
    ui->bodyTv->setEditTriggers(QAbstractItemView::NoEditTriggers);
    bodyModel->select();

}

BodyWnd::~BodyWnd()
{
    delete ui;
}

void BodyWnd::on_addPb_clicked()
{
    QString area = ui->bodyLe->text();

    if(!area.isEmpty())
    {
        db->inserIntoTableBody(area);
        bodyModel->select();
    }
    else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}

void BodyWnd::closeQuestion()
{
    ques->close();
    bodyModel->select();
}




void BodyWnd::on_bodyTv_doubleClicked(const QModelIndex &index)
{
    int row = index.row();

    QString id=  ui->bodyTv->model()->data(ui->bodyTv->model()->index(row, 0)).toString();
    QString selectedArea = ui->bodyTv->model()->data(ui->bodyTv->model()->index(row, 1)).toString();

    const int page=1;
    emit update(selectedArea, id,page);
    emit deleteBody(id,TABLE_BODY);
    ques->show();
    connect(ques, &Question::closeWnd, this, &BodyWnd::closeQuestion);
}


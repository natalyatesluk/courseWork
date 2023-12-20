#include "bodywnd.h"
#include "ui_bodywnd.h"
#include <QMessageBox>
BodyWnd::BodyWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BodyWnd)
{
    ui->setupUi(this);
    db= new SqlDBManeger();
    db->updateList(ui->bodyTv,TABLE_BODY);
    ques= new Question();
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
        db->updateList(ui->bodyTv,TABLE_BODY);
    }
    else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}

void BodyWnd::closeQuestion()
{
    ques->close();
    db->updateList(ui->bodyTv, TABLE_BODY);
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


#ifndef MASTERSWND_H
#define MASTERSWND_H

#include <QWidget>
#include <QSqlDatabase>
#include <sqldbmaneger.h>
class QSqlTableModel;

class DBManager;

namespace Ui {
class MastersWnd;
}

class MastersWnd : public QWidget
{
    Q_OBJECT

public:
    explicit MastersWnd(QWidget *parent = nullptr);
    ~MastersWnd();

private:
    Ui::MastersWnd *ui;
    SqlDBManeger *sqlDBM;
};

#endif // MASTERSWND_H

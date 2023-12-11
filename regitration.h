#ifndef REGITRATION_H
#define REGITRATION_H
#define SYSTEM_PASSWORD "catdog2021"
#include <QWidget>
#include <QSqlDatabase>
#include <sqldbmaneger.h>
class QSqlTableModel;

class DBManager;
namespace Ui {
class Regitration;
}

class Regitration : public QWidget
{
    Q_OBJECT

public:
    explicit Regitration(QWidget *parent = nullptr);
    ~Regitration();

private slots:
    void on_checksysLE_clicked();
    void on_registration_clicked();

private:
    Ui::Regitration *ui;
    SqlDBManeger *sqlDBM;
};

#endif // REGITRATION_H

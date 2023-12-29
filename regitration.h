#ifndef REGITRATION_H
#define REGITRATION_H
#define SYSTEM_PASSWORD "catdog2021"

#include <QSqlDatabase>
#include <sqldbmaneger.h>
#include <QWidget>
#include <QDialog>

class QWidget;
class QDialog;
class DBManager;
namespace Ui {
class Regitration;
}

class Regitration : public QDialog
{
    Q_OBJECT

public:
    explicit Regitration(QWidget *parent = nullptr);
    ~Regitration();

private slots:
    void on_checksysLE_clicked();
//    void on_registration_clicked();

    void on_adminPb_clicked();

    void on_customerPb_clicked();

private:
    Ui::Regitration *ui;
    DBManager *sqlDBM;

signals:
    void mainWnd();
};

#endif // REGITRATION_H

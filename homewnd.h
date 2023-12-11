#ifndef HOMEWND_H
#define HOMEWND_H

#include <QWidget>
#include "masterswnd.h"
namespace Ui {
class HomeWnd;
}

class HomeWnd : public QWidget
{
    Q_OBJECT

public:
    explicit HomeWnd(QWidget *parent = nullptr);
    ~HomeWnd();

private slots:
    void on_mastersPb_clicked();

private:
    Ui::HomeWnd *ui;
    MastersWnd *masterWnd;
};

#endif // HOMEWND_H

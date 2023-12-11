#ifndef CUSTOMERWND_H
#define CUSTOMERWND_H

#include <QWidget>

namespace Ui {
class CustomerWnd;
}

class CustomerWnd : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWnd(QWidget *parent = nullptr);
    ~CustomerWnd();

private:
    Ui::CustomerWnd *ui;
};

#endif // CUSTOMERWND_H

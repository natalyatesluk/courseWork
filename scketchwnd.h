#ifndef SCKETCHWND_H
#define SCKETCHWND_H

#include <QWidget>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QByteArray>
#include "sqldbmaneger.h"
#include "sketch.h"

class DBManager;
class Question;
class QVBoxLayout;
class QLabel;

namespace Ui {
class ScketchWnd;
}

class ScketchWnd : public QWidget
{
    Q_OBJECT

public:
    explicit ScketchWnd(QWidget *parent = nullptr);
    ~ScketchWnd();
private slots:
    void loadImage();

    void on_nextPb_clicked();

    void on_backPb_clicked();

private:
    Ui::ScketchWnd *ui;
    QLabel *imageLabel;
    DBManager *db;
    Sketch *sketch;
    Question *qstn;
    QList<QLabel *> imageLabels;
    int currentIndexStckW;
    void updateImage();
    void loadImageFromByteArray(Sketch *sketch,QString statusSkt);
public slots:
    void closeQstn(Sketch *sketch);
signals:
    void add(QByteArray &imageData, int page);
};

#endif // SCKETCHWND_H

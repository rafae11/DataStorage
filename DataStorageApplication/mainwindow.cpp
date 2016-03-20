#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "overloads.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_storedata_clicked()
{
    StoreDataRequest sdr;
    QDataStream ds(&x,QIODevice::WriteOnly);

    sdr.setDateTime(QDateTime::currentDateTime());
    sdr.setRelative(2000);

    QVector<quint16> zz;
    for(int i=0; i < 8; i++)
    {
        zz.push_back(i);
    }

    sdr.setSamples(zz);

    ds << sdr;

    qDebug() << x;
}

void MainWindow::on_pushButton_clicked()
{
    QByteArray y = x;
    QDataStream ds(&y, QIODevice::ReadOnly);

    StoreDataRequest req;
    ds >> req;

    qDebug() << req.Header();
    qDebug() << req.DateTime();
    qDebug() << req.Relative();
    qDebug() << req.Samples();
}

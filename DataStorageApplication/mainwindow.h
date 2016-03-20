#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "storedatarequest.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_storedata_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //StoreDataRequest sdr;
    QByteArray x;
};

#endif // MAINWINDOW_H


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/capitain.jpg");
    int w = ui->miyagi->width();
    int h = ui->miyagi->height();

    ui->miyagi->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Chebupel_clicked()
{
    Dialog window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui -> login -> text();
    QString password = ui -> pass -> text();

    if (login == "user" && password == "user") {
        QMessageBox::information(this,"heh", "Successful");

        hide();
            Dialog window;
            window.setModal(true);
            window.exec();

    } else {
        QMessageBox::warning(this,"heeh", "Unsuccessful");
    }

}




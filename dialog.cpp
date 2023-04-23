#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/zvoni babushke.jpg");
    int w = ui->babushka->width();
    int h = ui->babushka->height();

    ui->babushka->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Dialog::~Dialog()
{
    delete ui;
}

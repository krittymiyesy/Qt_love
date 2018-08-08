#include "mydialog.h"
#include "ui_mydialog.h"
#include "widget.h"
#include <QPainter>
#include <QPaintEvent>
#include "hu.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("Annzoe"));
    QPushButton *quit=new QPushButton(this);
    quit->setText(tr("退出"));
    quit->move(170,230);
    quit->show();
    connect(quit,&QPushButton::clicked,qApp,&QApplication::quit);

}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/image/爱你.jpg"));
}






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
    setWindowTitle(QString::fromUtf8("潘老虎爱超~神~"));
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::Drawer);
    QPushButton *quit=new QPushButton(this);
    quit->setStyleSheet("background: transparent;QColor(255,170,255,125)");
    quit->setText(tr("点这里才能退出哦"));
    quit->move(300,375);
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
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/image/loveyoumuch.jpg"));
}






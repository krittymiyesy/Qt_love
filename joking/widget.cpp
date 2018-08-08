#include "widget.h"
#include "ui_widget.h"
#include "mydialog.h"
#include <QTime>
#include <QTimer>
//#include <QPushButton>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QMediaPlayer>
#include <QDir>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|Qt::WindowSystemMenuHint|Qt::WindowStaysOnTopHint);
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    setMouseTracking(true);
    ui->pushButton_2->setMouseTracking(true);
    player=new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../joking/n.mp3"));
    //qDebug()<<absolutePath;
    player->play();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    MyDialog *mydialog=new MyDialog(this);
    mydialog->show();
}

void Widget::on_pushButton_2_clicked()
{

    ui->pushButton_2->move(qrand()%256,qrand()%256);

}

void Widget::mouseMoveEvent(QMouseEvent *e)
{

    if(enterBtn(e->pos(),ui->pushButton_2))
    {
        ui->pushButton_2->move(qrand()%256,qrand()%256);
    }
}

bool Widget::enterBtn(QPoint pp, QPushButton *btn)
{
    int height=btn->height();
    int width=btn->width();
    QPoint btnMinPos=btn->pos();
    QPoint btnMaxPos=btn->pos();
    btnMaxPos.setX(btn->pos().x()+width);
    btnMaxPos.setY(btn->pos().y()+height);
    if(pp.x()>=btnMinPos.x()&&pp.y()>=btnMinPos.y()&&pp.x()<=btnMaxPos.x()&&pp.y()<=btnMaxPos.y())
    {
        return true;

    }
    else
        return false;

}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/image/爱你.jpg"));
}

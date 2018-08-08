#include "hu.h"
#include "ui_hu.h"
#include <QPushButton>

hu::hu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hu)
{
    ui->setupUi(this);
    setWindowTitle(tr("QQ"));
    QPushButton *quit1=new QPushButton(this);
    quit1->setText(tr("Quit"));
    quit1->move(160,250);
    quit1->show();
    connect(quit1,&QPushButton::clicked,qApp,&QApplication::quit);
}

hu::~hu()
{
    delete ui;
}

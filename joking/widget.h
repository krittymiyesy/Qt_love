#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Widget;
}

class QMediaPlayer;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void mouseMoveEvent(QMouseEvent *e);
    bool enterBtn(QPoint pp,QPushButton *btn);
    void paintEvent(QPaintEvent *event);
private:
    Ui::Widget *ui;
    QMediaPlayer *player;

};

#endif // WIDGET_H

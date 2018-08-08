#ifndef HU_H
#define HU_H

#include <QDialog>

namespace Ui {
class hu;
}

class hu : public QDialog
{
    Q_OBJECT

public:
    explicit hu(QWidget *parent = 0);
    ~hu();

private:
    Ui::hu *ui;
};

#endif // HU_H

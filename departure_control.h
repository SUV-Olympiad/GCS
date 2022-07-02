#ifndef DEPARTURE_CONTROL_H
#define DEPARTURE_CONTROL_H

#include <QWidget>

namespace Ui {
class departure_control;
}

class departure_control : public QWidget
{
    Q_OBJECT

public:
    explicit departure_control(QWidget *parent = nullptr);
    ~departure_control();

private:
    Ui::departure_control *ui;
};

#endif // DEPARTURE_CONTROL_H

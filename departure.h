#ifndef DEPARTURE_H
#define DEPARTURE_H

#include <QWidget>

namespace Ui {
class departure;
}

class departure : public QWidget
{
    Q_OBJECT

public:
    explicit departure(QWidget *parent = nullptr);
    ~departure();

private:
    Ui::departure *ui;
};

#endif // DEPARTURE_H

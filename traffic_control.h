#ifndef TRAFFIC_CONTROL_H
#define TRAFFIC_CONTROL_H

#include <QWidget>

#include "individualdlg.h"

namespace Ui {
class traffic_control;
}

class traffic_control : public QWidget
{
    Q_OBJECT

public:
    explicit traffic_control(QWidget *parent = nullptr);
    ~traffic_control();


private slots:
    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::traffic_control *ui;
    IndividualDlg *individualdlg;
};

#endif // TRAFFIC_CONTROL_H

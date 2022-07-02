#ifndef INDIVIDUALWG_H
#define INDIVIDUALWG_H

#include <QWidget>

namespace Ui {
class individualWg;
}

class individualWg : public QWidget
{
    Q_OBJECT

public:
    explicit individualWg(QWidget *parent = nullptr);
    ~individualWg();

private:
    Ui::individualWg *ui;
};

#endif // INDIVIDUALWG_H

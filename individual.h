#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <QDialog>

namespace Ui {
class Individual;
}

class Individual : public QDialog
{
    Q_OBJECT

public:
    explicit Individual(QWidget *parent = nullptr);
    ~Individual();

private:
    Ui::Individual *ui;
};

#endif // INDIVIDUAL_H

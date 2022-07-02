#ifndef INDIVIDUALDLG_H
#define INDIVIDUALDLG_H

#include <QDialog>

namespace Ui {
class IndividualDlg;
}

class IndividualDlg : public QDialog
{
    Q_OBJECT

public:
    explicit IndividualDlg(QWidget *parent = nullptr);
    ~IndividualDlg();

private:
    Ui::IndividualDlg *ui;
};

#endif // INDIVIDUALDLG_H

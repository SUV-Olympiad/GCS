#include "individualdlg.h"
#include "ui_individualdlg.h"

IndividualDlg::IndividualDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IndividualDlg)
{
    ui->setupUi(this);
}

IndividualDlg::~IndividualDlg()
{
    delete ui;
}

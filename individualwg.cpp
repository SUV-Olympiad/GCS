#include "individualwg.h"
#include "ui_individualwg.h"

individualWg::individualWg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::individualWg)
{
    ui->setupUi(this);
}

individualWg::~individualWg()
{
    delete ui;
}

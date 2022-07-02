#include "departure.h"
#include "ui_departure.h"

departure::departure(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::departure)
{
    ui->setupUi(this);
}

departure::~departure()
{
    delete ui;
}

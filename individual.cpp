#include "individual.h"
#include "ui_individual.h"

Individual::Individual(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Individual)
{
    ui->setupUi(this);
}

Individual::~Individual()
{
    delete ui;
}

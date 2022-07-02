#include "departure_control.h"
#include "ui_departure_control.h"

departure_control::departure_control(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::departure_control)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );

}

departure_control::~departure_control()
{
    delete ui;
}

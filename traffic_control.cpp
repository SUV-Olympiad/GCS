#include "traffic_control.h"
#include "ui_traffic_control.h"

#include "individualdlg.h"
#include "mainwindow.h"

#include <QDebug>

traffic_control::traffic_control(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::traffic_control)
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

    ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);

    qDebug() << "test";
}


traffic_control::~traffic_control()
{
    delete ui;
}

void traffic_control::on_tableWidget_cellClicked(int row, int column)
{

    qDebug() << row << column;
}

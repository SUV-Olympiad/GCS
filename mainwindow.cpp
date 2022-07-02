#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "traffic_control.h"
#include "departure_control.h"
#include "individualwg.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->addTab(new traffic_control(), QString("Traffic Control"));
    ui->tabWidget->addTab(new departure_control(), QString("Departure Control"));
    ui->tabWidget->addTab(new individualWg(), QString("Individua Control"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "calculate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << "Start apl.";

    connect(ui->btnClick, SIGNAL(clicked()), this, SLOT(slotClick()));

    qDebug() << plus(5, 7);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::slotClick()
{
    int a = 5;
    qDebug() << "Click.";
}

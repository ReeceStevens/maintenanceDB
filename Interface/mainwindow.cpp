#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    label = new QLabel("Welcome to the Space Jam", this);
    label->setMargin(0);
    label->setWordWrap(true);

    //QWidget* widget = new QWidget;
    //QHBoxLayout* layout = new QHBoxLayout;
    //layout->addWidget(label);
    //widget->show();

    //create button
    new_button = new QPushButton("Create New Inventory", this);
    //set size and location of button
    new_button->setGeometry(QRect(QPoint(100,100), QSize(250,100)));
    //connect to appropriate slot?
    connect(new_button, SIGNAL(released()), this, SLOT(handleNew()));

    update_button = new QPushButton("Update Invent", this);
    update_button->setGeometry(QRect(QPoint(100,300), QSize(250,100)));
    connect(update_button, SIGNAL(released()), this, SLOT(handleUpdate()));

    remind_button = new QPushButton("Check Next Maintenance", this);
    remind_button->setGeometry(QRect(QPoint(100,500), QSize(250,100)));
    connect(remind_button, SIGNAL(released()), this, SLOT(handleRemind()));

}

void MainWindow::handleNew()
{
    //Create New Database
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, tr("Open Database"), "", tr("*.csv *.xls *.xlsv"));


    //change text
    //new_button->setText("Yay");
    //change size of button
}

void MainWindow::handleUpdate()
{
    update_button->setText("Aw");

}

void MainWindow::handleRemind()
{
    remind_button->setText("WEOIFHJWEIOFHUIO");


}

MainWindow::~MainWindow()
{
    delete ui;
}

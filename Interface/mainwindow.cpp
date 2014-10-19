#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //label = new QLabel("Welcome to the Space Jam", this);
    //label->setMargin(0);
    //label->setWordWrap(true);

    //QWidget* widget = new QWidget;
    //QHBoxLayout* layout = new QHBoxLayout;
    //layout->addWidget(label);
    //widget->show();

    //create button
    new_button = new QPushButton("Create New Inventory", this);
    //set size and location of button
    new_button->setGeometry(QRect(QPoint(500,100), QSize(250,100)));
    //connect to appropriate slot?
    connect(new_button, SIGNAL(released()), this, SLOT(handleNew()));

    update_button = new QPushButton("Update Invent", this);
    update_button->setGeometry(QRect(QPoint(500,300), QSize(250,100)));
    connect(update_button, SIGNAL(released()), this, SLOT(handleUpdate()));

    remind_button = new QPushButton("Check Next Maintenance", this);
    remind_button->setGeometry(QRect(QPoint(500,500), QSize(250,100)));
    connect(remind_button, SIGNAL(released()), this, SLOT(handleRemind()));

}

void MainWindow::handleNew()
{
    //Create New Database
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, tr("Open Database"), "", tr("*.csv *.xls *.xlsv"));

    //Insert Reece

}

void MainWindow::handleUpdate()
{

    setAutoFillBackground(true);

    //layout = new QHBoxLayout(this);
    close = new QPushButton(this);
    QPixmap pix = style()->standardPixmap(QStyle::SP_TitleBarCloseButton);
    close->setText("Close");
    close->setMinimumHeight(20);

    vbox = new QVBoxLayout;
    tableWidget = new QTableWidget(this);
    tableWidget->setRowCount(10);
    tableWidget->setColumnCount(10);
    vbox->addWidget(tableWidget);
    vbox->addWidget(close);



    tableWidget->setMinimumWidth(1000);
    tableWidget->setMinimumHeight(600);

    //QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg((row+1)*(column+1)));
    tableWidget->setItem(5,0, new QTableWidgetItem("Item1"));
    tableWidget->setItem(5,9, new QTableWidgetItem("Item2"));

    widtable = new QWidget;
    setCentralWidget(widtable);
    widtable->setLayout(vbox);
    //resize(1,1);
    //ui->tableView->setModel(tableWidget);
    //layout->addWidget(tableWidget);
    //setLayout(layout);
    //tableWidget->showMaximized();

    connect(close, SIGNAL(released()), this, SLOT(handleClose()));

}

void MainWindow::handleClose()
{
    tableWidget->hide();
    close->hide();
}


void MainWindow::handleRemind()
{
    remind_button->setText("WEOIFHJWEIOFHUIO");


}

MainWindow::~MainWindow()
{
    delete ui;
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QBoxLayout>
#include <QHBoxLayout>
#include <QFileDialog>
#include <QTableWidget>
#include <QItemSelectionModel>
#include <QtGui>
#include <QMainWindow>
#include "newwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    //void openNewWindow();

private slots:
    void handleNew();
    void handleUpdate();
    void handleRemind();
    void handleClose();

private:
    Ui::MainWindow *ui;
    QPushButton *new_button;
    QPushButton *update_button;
    QPushButton *remind_button;
    QItemSelectionModel *m;
    QVBoxLayout *layout;
    QTableWidget *tableWidget;
    QTableView *database;
    QLabel* label;

    QVBoxLayout *vbox;
    QWidget *widtable;
    QPushButton *close;
    //NewWindow *updateWindow;
};

#endif // MAINWINDOW_H

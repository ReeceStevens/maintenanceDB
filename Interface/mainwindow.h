#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QHBoxLayout>
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void handleNew();
    void handleUpdate();
    void handleRemind();

private:
    Ui::MainWindow *ui;
    QPushButton *new_button;
    QPushButton *update_button;
    QPushButton *remind_button;

    QLabel* label;
};

#endif // MAINWINDOW_H

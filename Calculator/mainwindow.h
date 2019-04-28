#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


private slots:
    void digit_pressed();
    void operator_pressed();
    void on_pushButton_point_released();
    void on_pushButton_pm_released();
    void on_pushButton_clear_released();
    void on_pushButton_result_released();
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

double first_num;
bool second_num_IP = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digit_pressed()));

    connect(ui -> pushButton_plus, SIGNAL(released()), this, SLOT(operator_pressed()));
    connect(ui -> pushButton_minus, SIGNAL(released()), this, SLOT(operator_pressed()));
    connect(ui -> pushButton_divide, SIGNAL(released()), this, SLOT(operator_pressed()));
    connect(ui -> pushButton_multiply, SIGNAL(released()), this, SLOT(operator_pressed()));

    ui -> pushButton_plus -> setCheckable(true);
    ui -> pushButton_minus -> setCheckable(true);
    ui -> pushButton_divide -> setCheckable(true);
    ui -> pushButton_multiply -> setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;

    if((ui -> pushButton_plus -> isChecked() || ui -> pushButton_minus -> isChecked() ||
            ui -> pushButton_divide -> isChecked() || ui -> pushButton_multiply -> isChecked()) && (!second_num_IP) ) {
        labelNumber = button -> text().toDouble();
        second_num_IP = true;
        newLabel = QString::number(labelNumber, 'g', 15);
    } else {
        if (ui -> label -> text().contains('.') && button -> text() == "0") {
            newLabel = ui -> label -> text() + button -> text();
        } else {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber, 'g', 15);
          }
    }

    ui->label->setText(newLabel);
}

void MainWindow::on_pushButton_point_released()
{
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::on_pushButton_pm_released()
{
    QPushButton *button = (QPushButton*) sender();
    double labelNumber;
    QString newLabel;

    labelNumber = ui -> label -> text().toDouble();
    labelNumber = labelNumber * -1;
    newLabel = QString::number(labelNumber, 'g', 15);
    ui -> label -> setText(newLabel);
}

void MainWindow::on_pushButton_clear_released()
{
    ui -> pushButton_plus -> setChecked(false);
    ui -> pushButton_minus -> setChecked(false);
    ui -> pushButton_divide -> setChecked(false);
    ui -> pushButton_multiply -> setChecked(false);

    second_num_IP = false;
    ui -> label -> setText("0");
}

void MainWindow::on_pushButton_result_released()
{
    double labelNumber, second_num;
    QString newLabel;

    second_num = ui -> label -> text().toDouble();

    if (ui -> pushButton_plus -> isChecked()) {
        labelNumber = first_num + second_num;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui -> label -> setText(newLabel);
        ui -> pushButton_plus -> setChecked(false);
    } else if (ui -> pushButton_minus -> isChecked()) {
        labelNumber = first_num - second_num;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui -> label -> setText(newLabel);
        ui -> pushButton_minus -> setChecked(false);
    } else if (ui -> pushButton_divide -> isChecked()) {
        labelNumber = first_num / second_num;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui -> label -> setText(newLabel);
        ui -> pushButton_divide -> setChecked(false);
    } else if (ui -> pushButton_multiply -> isChecked()) {
        labelNumber = first_num * second_num;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui -> label -> setText(newLabel);
        ui -> pushButton_multiply -> setChecked(false);
    }

    second_num_IP = false;
}

void MainWindow::operator_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    first_num = ui -> label -> text().toDouble();

    button -> setChecked(true);

}

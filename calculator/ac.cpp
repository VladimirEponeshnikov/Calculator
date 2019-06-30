#include "calculator.h"
#include "ui_calculator.h"
void Calculator::on_pushButton_ac_clicked()
{
    ui->pushButton_proz->setChecked(false);
    ui->pushButton_del->setChecked(false);
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->results->setText("0");
}

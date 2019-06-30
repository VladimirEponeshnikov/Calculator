#include "calculator.h"
#include "ui_calculator.h"
void Calculator::on_pushButton_dot_clicked()
{
    if(!(ui->results->text().contains('.')))
     ui->results->setText(ui->results->text()+".");
}



#include "calculator.h"
#include "ui_calculator.h"

double Calculator::lablplus(double first, double second){
   double l;
    l=first+second;
return l;
}
double Calculator::lablminus(double first, double second){
   double l;
    l=first-second;
return l;
}
double Calculator::lablumn(double first, double second){
   double l;
    l=first*second;
return l;
}
double Calculator::labldel(double first, double second){
   double l;
    l=first/second;
return l;
}
void Calculator::on_pushButton_ravno_clicked(){
     double second, label;
     QString a;


     second=ui->results->text().toDouble();
    if(ui->pushButton_plus->isChecked())  {
        label=lablplus(first,second);
        a=QString::number(label,'g',15);
        ui->results->setText(a);
        ui->pushButton_plus->setChecked(false);
    }
    else if(ui->pushButton_minus->isChecked()) {
        label=lablminus(first,second);
        a=QString::number(label,'g',15);
        ui->results->setText(a);
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_proz->isChecked())  {
        label=lablumn(first,second);
        a=QString::number(label,'g',15);
        ui->results->setText(a);
        ui->pushButton_proz->setChecked(false);
    }
    else if(ui->pushButton_del->isChecked())   {
        if(second==0) {
            ui->results->setText("0");
        }
            else {
        label=labldel(first,second);
        a=QString::number(label,'g',15);
        ui->results->setText(a);
        ui->pushButton_del->setChecked(false);
        }

    }
    r=1;
}


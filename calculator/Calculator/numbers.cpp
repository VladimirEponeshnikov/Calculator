#include "calculator.h"
#include "ui_calculator.h"
void Calculator::numbers()
{
   QPushButton *b =  (QPushButton *)sender();
   double n;
   QString s;
   if(r==1) {
   ui->results->setText("");
   r=0;
   }
   if(ui->results->text().contains(".")&&b->text()=="0") {

       s=ui->results->text()+b->text();

   } else {
   n=(ui->results->text()+b->text()).toDouble();
   s=QString::number(n,'g',15);
   ui->results->setText(s);
   }

}

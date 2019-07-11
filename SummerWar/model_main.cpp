#include "model_main.h"
#include "ui_model_main.h"
#include <QPixmap>

double num_first;

model_main::model_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::model_main)
{
    ui->setupUi(this);

connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(allnumber()));
connect(ui->pushButton_ostatok, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
connect(ui->pushButton_delenie, SIGNAL(clicked()), this, SLOT(math_operations()));
connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
connect(ui->pushButton_umnozshenie, SIGNAL(clicked()), this, SLOT(math_operations()));
connect(ui->pushButton_modul, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_tg, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_degree_2, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_pi, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_plus_minus, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_comma, SIGNAL(clicked()), this, SLOT(operations()));
connect(ui->pushButton_any_degree, SIGNAL(clicked()), this, SLOT(math_operations()));
connect(ui->pushButton_any_sqrt, SIGNAL(clicked()), this, SLOT(math_operations()));

  ui->pushButton_plus->setCheckable(true);
  ui->pushButton_minus->setCheckable(true);
  ui->pushButton_umnozshenie->setCheckable(true);
  ui->pushButton_delenie->setCheckable(true);
  ui->pushButton_any_sqrt->setCheckable(true);
  ui->pushButton_any_degree->setCheckable(true);
}

model_main::~model_main()
{
    delete ui;
}

void model_main::allnumber(){
    QPushButton *Button =(QPushButton *) sender();
    double numbers;
    QString new_label;

    if (ui->label_show->text().contains(".") && Button->text() == "0"){
        new_label = ui->label_show->text() + Button->text();
    }
    else {
        numbers = (ui->label_show->text() + Button->text()).toDouble();
        new_label = QString::number(numbers, 'q', 15);
    }
    numbers = (ui->label_show->text() + Button->text()).toDouble();
    new_label = QString::number(numbers, 'g', 15);
    ui ->label_show->setText(new_label);
}


void model_main::on_pushButton_point_clicked()
{
    if(!(ui->label_show->text().contains('.')))
         ui ->label_show->setText(ui->label_show->text() + ".");
}

void model_main::operations(){
     QPushButton *Button = (QPushButton *) sender();
     double numbers;
     numbers = (ui->label_show->text()).toDouble();
     QString new_label;

     if(Button->text()== "%"){
        numbers = numbers * 0.01;
        }
     if(Button->text()== "|a|"){
        if (numbers < 0.0)
            numbers = numbers * (-1);
        }

     if(Button->text()== "sin")
        numbers = sin(numbers);

     if(Button->text()== "cos")
        numbers = cos(numbers);

     if(Button->text()== "tan")
        numbers = tan(numbers);

     if(Button->text()== "√"){
        if (numbers > 0)
           numbers = sqrt(numbers);
        else ui->label_show->setText("ERROR");
        }

     if(Button->text()== "a²")
        numbers = numbers * numbers;

     if(Button->text()== "pi")
        numbers = 3.1415926535897932;

     if(Button->text()== "+/-")
        numbers = numbers * -1;

     new_label = QString::number(numbers, 'g', 15);
     ui->label_show->setText(new_label);

 }

void model_main::math_operations(){
    QPushButton *Button = (QPushButton *) sender();
    num_first = ui->label_show->text().toDouble();
    ui->label_show->setText("");
    Button->setChecked(true);
}

void model_main::on_pushButton_clear_all_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_umnozshenie->setChecked(false);
    ui->pushButton_delenie->setChecked(false);

    ui->label_show->setText("0");

}



void model_main::on_pushButton_answer_clicked()
{
    double num, num_second;
    QString new_label;

    num_second = ui->label_show->text().toDouble();

    if(ui->pushButton_plus->isChecked()){
       num = num_first + num_second;
       new_label = QString::number(num, 'q', 5);

       ui->label_show->setText(new_label);

       ui->pushButton_plus -> setChecked(false);
       }
    else if(ui->pushButton_minus->isChecked()){
           num = num_first-num_second;
           new_label = QString::number(num, 'q', 5);

           ui->label_show->setText(new_label);

           ui->pushButton_minus -> setChecked(false);
           }
   else if(ui->pushButton_umnozshenie->isChecked()){
           num = num_first*num_second;
           new_label = QString::number(num, 'q', 5);

           ui->label_show->setText(new_label);

           ui->pushButton_umnozshenie -> setChecked(false);
           }
   else if(ui->pushButton_delenie->isChecked()){


           if (num_second == 0)
               ui->label_show->setText("ERROR");
           else
                num = num_first/num_second;
                new_label = QString::number(num, 'q', 7);

           ui->label_show->setText(new_label);

           ui->pushButton_delenie -> setChecked(false);
           }
    else if (ui->pushButton_any_degree->isChecked()) {
             if (num_first == 0)
                 ui->label_show->setText("ERROR");
              else {
                    num=pow(num_first,num_second);
                    new_label=QString::number(num,'g',15);
                    ui->label_show->setText(new_label);
                    }
             ui->pushButton_any_degree->setChecked(false);
             }
    else if (ui->pushButton_any_sqrt->isChecked()) {
             if (num_first <= 0)
                 ui->label_show->setText("ERROR");
             if (num_first == 1)
                 ui->label_show->setText(QString::number(num,'g',15));
             else {
                  if (num_second <= 0)
                      ui->label_show->setText("ERROR");
                  else num = pow(num_first, 1/num_second);
                       new_label=QString::number(num,'g',15);
                       ui->label_show->setText(new_label);
             }
             ui->pushButton_any_sqrt->setChecked(false);
    }

}

void model_main::on_pushButton_delete_clicked()
{
    QString new_label;
    new_label.resize(new_label.size()-1);
    if(new_label.length()==0)
       {
       new_label="0";
       }
    ui->label_show->setText(new_label);
}

void model_main::on_pushButton_comma_clicked()
{
    if(!(ui->label_show->text().contains(',')))
       ui ->label_show->setText(ui->label_show->text() + ",");
}

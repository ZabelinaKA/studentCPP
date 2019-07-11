#ifndef MODEL_MAIN_H
#define MODEL_MAIN_H

#include <QMainWindow>
#include <QtMath>
#include <Qt>

namespace Ui {
class model_main;
}

class model_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit model_main(QWidget *parent = nullptr);
    ~model_main();

private:
    Ui::model_main *ui;
private slots:
    void allnumber();
    void on_pushButton_point_clicked();
    void operations();
     void math_operations();
    void on_pushButton_clear_all_clicked();
    void on_pushButton_answer_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_comma_clicked();
};

#endif // MODEL_MAIN_H

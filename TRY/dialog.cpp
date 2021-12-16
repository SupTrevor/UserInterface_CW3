#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
Dialog::get_Notes(){
    return ui->textEdit;
}
Dialog::get_Labels(){
    return ui->lineEdit;
}

Dialog::~Dialog()
{
    delete ui;
}

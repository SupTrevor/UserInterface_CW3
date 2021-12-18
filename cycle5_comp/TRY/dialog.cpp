#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(OkBtn()));
}
QTextEdit* Dialog::get_Notes(){
    return ui->textEdit;
}
QLineEdit* Dialog::get_Labels(){
    return ui->lineEdit;
}

QDialogButtonBox* Dialog::get_ButtBox(){
    return ui->buttonBox;
}

void Dialog::OkBtn(){
    str = ui->textEdit->toPlainText();
    emit sendData(str);
}


Dialog::~Dialog()
{
    delete ui;
}

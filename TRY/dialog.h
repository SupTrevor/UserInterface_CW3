#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTextEdit>
#include <QLineEdit>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:

    QTextEdit* get_Notes();
    QLineEdit* get_Labels();
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void Dialog::Open_Dialog(){
        Dialog* v = new Dialog();
        v->show();
    }

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

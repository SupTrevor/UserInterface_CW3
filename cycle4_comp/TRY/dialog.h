#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTextEdit>
#include <QLineEdit>
#include <QDialogButtonBox>

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
    QDialogButtonBox* get_ButtBox();
    QString str;

signals:
    void sendData(QString);

private slots:
    void OkBtn();

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H

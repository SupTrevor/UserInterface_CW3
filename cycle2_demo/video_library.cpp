#include "video_library.h"
#include "ui_video_library.h"

video_library::video_library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::video_library)
{
    ui->setupUi(this);
}
QPushButton* video_library::get_dialog_butt(){
    return ui->EditBut;
}

QVideoWidget* video_library:: get_widget(){
    return ui->player_widget;
}
QLabel* video_library::get_button(){
    return ui->test1;
}
video_library::~video_library()
{
    delete ui;
}

QTextBrowser* video_library:: get_notes(){
    return ui->textBrowser;
}

void video_library::update_notes(QString data){
    QTextBrowser* notes = ui->textBrowser;
    notes->setText(data);

}

void video_library::on_EditBut_clicked(bool checked)
{
        Dialog* pop_window = new Dialog();
        connect(pop_window,SIGNAL(sendData(QString)),this,SLOT(update_notes(QString)));
        pop_window->show();
}

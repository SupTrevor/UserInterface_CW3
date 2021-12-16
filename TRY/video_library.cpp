#include "video_library.h"
#include "ui_video_library.h"

video_library::video_library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::video_library)
{
    ui->setupUi(this);
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

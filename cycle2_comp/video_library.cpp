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

QWidget* video_library::get_scrollAreaWidget() {
    return ui->scrollAreaWidget;
}

QWidget* video_library::get_folderWidget() {
    return ui->folderWidget;
}

QLabel* video_library::get_queueTitle(){
    return ui->queue;
}

QPushButton* video_library::get_playButton() {
    return ui->playButton;
}

QPushButton* video_library::get_pauseButton() {
    return ui->pauseButton;
}

QPushButton* video_library::get_volumnButton() {
    return ui->volumnButton;
}

QPushButton* video_library::get_speedButton() {
    return ui->speedButton;
}

QPushButton* video_library::get_backwardButton() {
    return ui->backwardButton;
}

QPushButton* video_library::get_forwardButton() {
    return ui->forwardButton;
}


video_library::~video_library()
{
    delete ui;
}

#include "video_library.h"
#include "ui_video_library.h"

video_library::video_library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::video_library)
{
    ui->setupUi(this);
    connect(ui->mark2,SIGNAL(clicked()),this,SLOT(trigger()));
    connect(ui->Cycling_Btn,SIGNAL(clicked()),this,SLOT(repo_show()));
    connect(ui->Flash_jump_btn,SIGNAL(clicked()),this,SLOT(flash_repo()));
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
void video_library::trigger(){
    flash->setVideoOutput(ui->flash_widget);
    flash->setMedia(QUrl::fromLocalFile("F:/kay's birthday/a.MOV"));
    flash->play();
}

void video_library::on_EditBut_clicked(bool checked)
{
        Dialog* pop_window = new Dialog();
        connect(pop_window,SIGNAL(sendData(QString)),this,SLOT(update_notes(QString)));
        pop_window->show();
}

void video_library::repo_show(){

    QLayout* ori_layout = ui->scroll_widget4->layout ();
        if (ori_layout != 0)
        {
        QLayoutItem *item;
        while ((item = ori_layout->takeAt(0)) != 0)
            ori_layout->removeItem (item);
        delete ori_layout;
        }


    QVBoxLayout* layout = new QVBoxLayout;
    QPushButton* repsitory_btn = new QPushButton(ui->scroll_widget4);
    repsitory_btn->setIconSize(QSize(200,100));
    QPixmap img(":/video_image1.png");
    repsitory_btn->setIcon(img);
    repsitory_btn->setGeometry(10,10,200,100);
    ui->scroll_widget4->setLayout(layout);
    layout->addWidget(repsitory_btn);
}

void video_library::flash_repo(){

    QLayout* ori_layout = ui->scroll_widget4->layout ();
        if (ori_layout != 0)
        {
        QLayoutItem *item;
        while ((item = ori_layout->takeAt(0)) != 0)
            ori_layout->removeItem (item);
        delete ori_layout;
        }

    QPushButton* repository_btn = new QPushButton(ui->scroll_widget4);
    QPixmap img(":/OIP.jpg");
    QVBoxLayout* layout = new QVBoxLayout();
    ui->scroll_widget4->setLayout(layout);
    repository_btn->setIconSize(QSize(200,100));
    repository_btn->setIcon(img);
    layout->addWidget(repository_btn);

}

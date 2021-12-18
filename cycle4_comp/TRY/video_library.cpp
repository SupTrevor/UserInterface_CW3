#include "video_library.h"
#include "ui_video_library.h"
#include "main.h"

QPushButton* user1;
QPushButton* user2;
QPushButton* user3;

video_library::video_library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::video_library)
{
    ui->setupUi(this);
    connect(ui->mark2,SIGNAL(clicked()),this,SLOT(trigger()));
    connect(ui->Cycling_Btn_3,SIGNAL(clicked()),this,SLOT(repo_show()));
    connect(ui->Flash_jump_btn,SIGNAL(clicked()),this,SLOT(flash_repo()));
    connect(ui->actionLog_In,SIGNAL(triggered()),this,SLOT(log_in()));
    connect(ui->actionInvite,SIGNAL(triggered()),this,SLOT(invite_()));

}
QPushButton* video_library::get_dialog_butt(){
    return ui->EditBut;
}

QVideoWidget* video_library:: get_widget(){
    return ui->player_widget;
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


void video_library::log_in(){
    login* l = new login();
    l->show();
}

void video_library::invite_(){
    Invite* i = new Invite();
    i->show();
    connect(i,SIGNAL(accepted()),this,SLOT(team()));
}

void video_library::team(){
//    ui->player_widget->setGeometry(270,50,580,610);
//    QWidget* TeamRow;
//    QVBoxLayout* layout = new QVBoxLayout;
//    TeamRow->setGeometry(860,50,100,610);
    user1 = new QPushButton;
    user2 = new QPushButton;
    user3 = new QPushButton;
//    user1->resize(60,60);
//    user2->resize(60,60);
//    user3->resize(60,60);
    QPixmap img(":/user.png");
    user1->setIcon(img);
    user2->setIcon(img);
    user3->setIcon(img);
    user1->setIconSize(QSize(55,55));
    user2->setIconSize(QSize(55,55));
    user3->setIconSize(QSize(55,55));
    user1->setStyleSheet("border:none");
    user2->setStyleSheet("border:none");
    user3->setStyleSheet("border:none");
//    ui->user_widget->setLayout(layout);
    ui->user_layout->addWidget(user1);
    ui->user_layout->addWidget(user2);
    ui->user_layout->addWidget(user3);
    user1->setGeometry(0,10,60,60);
    user2->setGeometry(0,80,60,60);
    user3->setGeometry(0,150,60,60);
    user1->connect(user1, SIGNAL(clicked()),this,SLOT(show_user1()));
    user2->connect(user2, SIGNAL(clicked()),this,SLOT(show_user2()));
    user3->connect(user3, SIGNAL(clicked()),this,SLOT(show_user3()));
}

void video_library::show_user1(){
    qDebug() << "show 1" << endl;
    loadFolder("D:\\ui-cw3\\cycle5_demo\\TRY\\user1");
}

void video_library::show_user2(){
    qDebug() << "show 2" << endl;
    loadFolder("D:\\ui-cw3\\cycle5_demo\\TRY\\user2");
}

void video_library::show_user3(){
    qDebug() << "show 3" << endl;
    loadFolder("D:\\ui-cw3\\cycle5_demo\\TRY\\user3");
}


void video_library::repo_show(){
    qDebug() << "repo_show" << endl;
    loadFolder("D:\\ui-cw3\\cycle5_demo\\TRY\\label");

}

void video_library::flash_repo(){
    qDebug() << "flash_repo" << endl;
    loadFolder("D:\\ui-cw3\\cycle5_demo\\TRY\\user1");
}


QWidget* video_library::get_scrollAreaWidget() {
    return ui->scrollAreaWidget;
}

TheWidget* video_library::get_folderWidget() {
    return (TheWidget*)ui->folderWidget;
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

//QPushButton* video_library::get_volumnButton() {
//    return ui->volumnButton;
//}

QPushButton* video_library::get_speedButton() {
    return ui->speedButton;
}

QPushButton* video_library::get_backwardButton() {
    return ui->backwardButton;
}

QPushButton* video_library::get_forwardButton() {
    return ui->forwardButton;
}



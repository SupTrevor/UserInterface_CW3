#ifndef VIDEO_LIBRARY_H
#define VIDEO_LIBRARY_H

#include <QMainWindow>


#include<QTextBrowser>
#include <iostream>
#include <QApplication>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QMediaPlaylist>
#include <string>
#include <vector>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtCore/QFileInfo>
#include <QtWidgets/QFileIconProvider>
#include <QDesktopServices>
#include <QImageReader>
#include <QMessageBox>
#include <QtCore/QDir>
#include <QtCore/QDirIterator>
#include "the_player.h"
#include "dialog.h"
#include "invite.h"
#include "login.h"
#include "the_widget.h"


namespace Ui {
class video_library;
}

class video_library : public QMainWindow
{
    Q_OBJECT

public:
    QMediaPlayer *flash = new QMediaPlayer;
    QTextBrowser* get_notes();
    QPushButton* get_dialog_butt();
    QVideoWidget* get_widget();

    QWidget* get_scrollAreaWidget();
    TheWidget* get_folderWidget();
    QLabel* get_queueTitle();
    QPushButton* get_playButton();
    QPushButton* get_pauseButton();
    QPushButton* get_volumnButton();
    QPushButton* get_speedButton();
    QPushButton* get_backwardButton();
    QPushButton* get_forwardButton();
//    QLabel* get_button();
    explicit video_library(QWidget *parent = 0);
//    ui->SetupUi(this);
    ~video_library();


public slots:
    void update_notes(QString data);
    void trigger();
    void on_EditBut_clicked(bool checked);
    void repo_show();
    void flash_repo();
    void show_user1();
    void show_user2();
    void show_user3();
    void log_in();
    void invite_();
    void team();

private:
    Ui::video_library *ui;

};




#endif // VIDEO_LIBRARY_H

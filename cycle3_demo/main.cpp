#include "video_library.h"
#include <QApplication>


#include <QTextBrowser>
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
#include <QLabel>
#include "the_player.h"
#include <QUrl>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    video_library w;
    Dialog m;
    QVideoWidget *videoWidget = w.get_widget();
    // the QMediaPlayer which controls the playback
    QMediaPlayer *player= new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl::fromLocalFile("F:/kay's birthday/a.MOV"));
    playlist->setCurrentIndex(1);
    player->setPlaylist(playlist);
    player->setVideoOutput(videoWidget);
    videoWidget->show();
    player->play();
    QLabel* test2 = w.get_button();
    test2->setText("aoihfosidjfos");
    w.show();
//    QDialogButtonBox* content_submit = m.get_ButtBox();
//    QTextEdit* input_contents = m.get_Notes();
//    QObject::connect(content_submit,SIGNAL(accepted()),&w,SLOT(update_notes()));
//    QPushButton *jump = w.get_dialog_butt();
//    connect(jump,SIGNAL(clicked(bool),);
    return a.exec();
}

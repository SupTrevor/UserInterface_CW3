#ifndef VIDEO_LIBRARY_H
#define VIDEO_LIBRARY_H

#include <QMainWindow>



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
#include "the_widget.h"

namespace Ui {
class video_library;
}

class video_library : public QMainWindow
{
    Q_OBJECT

public:
    QVideoWidget* get_widget();
    QWidget* get_scrollAreaWidget();
    QWidget* get_folderWidget();
    QLabel* get_queueTitle();
    QPushButton* get_playButton();
    QPushButton* get_pauseButton();
    QPushButton* get_volumnButton();
    QPushButton* get_speedButton();
    QPushButton* get_backwardButton();
    QPushButton* get_forwardButton();
    explicit video_library(QWidget *parent = 0);
//    ui->SetupUi(this);
    ~video_library();

private:
    Ui::video_library *ui;

};




#endif // VIDEO_LIBRARY_H

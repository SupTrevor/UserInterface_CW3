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
#include "dialog.h"


namespace Ui {
class video_library;
}

class video_library : public QMainWindow
{
    Q_OBJECT

public:
    QPushButton* get_dialog_butt();

    QVideoWidget* get_widget();
    QLabel* get_button();
    explicit video_library(QWidget *parent = 0);
//    ui->SetupUi(this);
    ~video_library();

private slots:
    void on_Edit_But_pressed();

private:
    Ui::video_library *ui;

};




#endif // VIDEO_LIBRARY_H

#include <QApplication>
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
#include <QUrl>
#include <string>
#include "the_player.h"
#include "the_button.h"
#include "the_widget.h"
#include "main.h"

void TheWidget::init()
{
    qDebug() << "has init" <<endl;
    buttons = new std::vector<TheButton *>();
    videos = new std::vector<TheButtonInfo>();
}

void TheWidget::setContent(std::vector<TheButton*>* b, std::vector<TheButtonInfo>* i) {
    buttons = b;
    videos = i;
}

// read in videos and thumbnails to this directory
void TheWidget::getInfoIn (std::string loc) {

    videos->clear();
//    std::vector<TheButtonInfo> out =  std::vector<TheButtonInfo>();
    QDir dir(QString::fromStdString(loc) );
    QDirIterator it(dir);
    printf("hege");

    while (it.hasNext()) { // for all files

        QString f = it.next();

            if (f.contains("."))

#if defined(_WIN32)
            if (f.contains(".wmv"))  { // windows
#else
            if (f.contains(".mp4") || f.contains("MOV"))  { // mac/linux
#endif

            QString thumb = f.left( f .length() - 4) +".png";
            if (QFile(thumb).exists()) { // if a png thumbnail exists
                QImageReader *imageReader = new QImageReader(thumb);
                    QImage sprite = imageReader->read(); // read the thumbnail
                    if (!sprite.isNull()) {
                        QIcon* ico = new QIcon(QPixmap::fromImage(sprite)); // voodoo to create an icon for the button
                        QUrl* url = new QUrl(QUrl::fromLocalFile( f )); // convert the file location to a generic url
                        videos -> push_back(TheButtonInfo( url , ico  ) ); // add to the output list
                    }
                    else
                        qDebug() << "warning: skipping video because I couldn't process thumbnail " << thumb << endl;
            }
            else
                qDebug() << "warning: skipping video because I couldn't find thumbnail " << thumb << endl;
        }
    }
}



void TheWidget::loadList(std::string name)
{
    buttons->clear();
//    for (auto widget: thisLayout->findChildren<QWidget*>
//                  ({}, Qt::FindDirectChildrenOnly))
//        delete widget;
    while(thisLayout->count())
    {
         QWidget *p=thisLayout->itemAt(0)->widget();
         p->setParent (NULL);
         thisLayout->removeWidget(p);
         delete p; // clear the memory
    }

    qDebug() << videos->size() << "~~~" <<endl;

    // create the buttons
    for ( int i = 0; i < videos->size(); i++ ) {

        TheButton *button = new TheButton(this);
        //button->connect(button, SIGNAL(jumpTo(TheButtonInfo* )), player, SLOT (jumpTo(TheButtonInfo*))); // when clicked, tell the player to play.


        buttons->push_back(button);

        thisLayout->addWidget(button);
        // printf("%d\n", i);
        TheButtonInfo *t = &videos->at(i);
        t->name = name;

        button->init(t);
        t->button = button;
        t->id = i;

    }

    qDebug() << "hehe " << buttons->size() << endl;
}


//void TheWidget::test(TheButtonInfo *info) {

//   qDebug() << "hehe " << endl;
//}



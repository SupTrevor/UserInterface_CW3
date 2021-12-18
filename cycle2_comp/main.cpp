
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
#include "main.h"
#include "the_widget.h"
using namespace std;



//void loadList2(
//              QWidget *widget, QLayout *layout)
//{
//    // create the four buttons
//    for ( int i = 0; i < videosinFolder.size(); i++ ) {

//        TheButton *button = new TheButton(widget);
//        MyWidget *test = new MyWidget();
//        button->connect(button, SIGNAL(jumpTo(TheButtonInfo* )), test, SLOT (addinQueue(TheButtonInfo *))); // when clicked, tell the player to play.

//        layout->addWidget(button);
//        // addinQueue(button, buttonsinQueue);
//        // printf("%d\n", i);
//        TheButtonInfo *t = &videos.at(i);
//        t->button = button;
//        button->init(t);
//        t->id = i;

//    }
//}
TheWidget *scrollAreaWidget;
TheWidget *folderWidget;

void realAdd(TheButtonInfo *info) {
    qDebug() << "oh yeah" << endl;
    info->name = "scrollAreaButton";
    scrollAreaWidget->videos->push_back(*info);
    scrollAreaWidget->loadList(info->name);

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    video_library w;
    scrollAreaWidget = (TheWidget*)w.get_scrollAreaWidget();
    scrollAreaWidget->init();

    QVBoxLayout *layout = new QVBoxLayout();
    scrollAreaWidget->setLayout(layout);
    scrollAreaWidget->thisLayout = layout;

    QLabel* queueTitle = w.get_queueTitle();
    queueTitle->setText("video queue");

    //std::vector<TheButtonInfo> v;

    if (argc == 2)
    {
        scrollAreaWidget->getInfoIn( std::string(argv[1]) );
        printf("%d videos.\n", scrollAreaWidget->videos->size());
    }

    ThePlayer *player= new ThePlayer();
    QVideoWidget *videoWidget = w.get_widget();
    QMediaPlaylist* playlist = new QMediaPlaylist();

    scrollAreaWidget->loadList("scrollAreaBotton");

    for (int i = 0; i < scrollAreaWidget->buttons->size(); i++)
    {
        TheButton *button = scrollAreaWidget->buttons->at(i);
        button->connect(button, SIGNAL(jumpTo(TheButtonInfo* )), player, SLOT (jumpTo(TheButtonInfo*))); // when clicked, tell the player to play.
    }


    // tell the player what buttons and videos are available
    player->setContent(scrollAreaWidget->buttons, scrollAreaWidget->videos);

    folderWidget = new TheWidget(w.get_folderWidget());
    folderWidget->init();
    QVBoxLayout *folderlayout = new QVBoxLayout();
    folderWidget->setLayout(folderlayout);
    folderWidget->thisLayout = folderlayout;

    folderWidget->getInfoIn( "C:\\Users\\Zz774\\Desktop\\ui_cycle\\cycle2_comp\\label");
    folderWidget->loadList("folderButton");

    for (int i = 0; i < folderWidget->buttons->size(); i++)
    {
        qDebug() << "yes" << i << endl;
        TheButton *button = folderWidget->buttons->at(i);
        button->connect(button, SIGNAL(jumpTo2(TheButtonInfo*)), folderWidget, SLOT (addinQueue(TheButtonInfo *))); // when clicked, tell the player to play.
    }


    playlist->setCurrentIndex(1);
    player->setPlaylist(playlist);
    player->setVideoOutput(videoWidget);
    videoWidget->show();


    player->play();

    QPushButton* playButton = w.get_playButton();
    playButton->connect(playButton, SIGNAL(clicked()), player, SLOT (play()));

    QPushButton* pauseButton = w.get_pauseButton();
    pauseButton->connect(pauseButton, SIGNAL(clicked()), player, SLOT (pause()));

    QPushButton* forwardButton = w.get_forwardButton();
    forwardButton->connect(forwardButton, SIGNAL(clicked()), player, SLOT (getNext()));
    
    QPushButton* backwardButton = w.get_backwardButton();
    backwardButton->connect(backwardButton, SIGNAL(clicked()), player, SLOT (getPrev()));

    w.show();

    return a.exec();
}

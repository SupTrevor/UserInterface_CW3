#include "the_player.h"
#include "queue_button.h"
#include <QMessageBox>

// all buttons have been setup, store pointers here
void ThePlayer::setContent(std::vector<TheButton*>* b, std::vector<TheButtonInfo>* i) {
    buttons = b;
    infos = i;
    jumpTo(buttons -> at(0) -> info);
}


// change the image and video for one button every one second
//void ThePlayer::shuffle() {
//    TheButtonInfo* i = & infos -> at (rand() % infos->size() );
//     setMedia(*i->url);
//    buttons -> at( updateCount++ % buttons->size() ) -> init( i );
//}

void ThePlayer::playStateChanged (QMediaPlayer::State ms) {
    switch (ms) {
        case QMediaPlayer::State::StoppedState:
            play(); // starting playing again...
            break;
    default:
        break;
    }
}

void ThePlayer::jumpTo (TheButtonInfo* button) {
    qDebug() << "hehe " << endl;
    onPlay = button -> id;
    setMedia( * button -> url);
    play();
}

void ThePlayer::getNext () {
    int inext = onPlay + 1;
    printf("!!%d\n", inext);
//    TheButtonInfo* bi = & infos -> at (inext );
//    emit jumpTo(bi);
    if (inext == infos->size())
    {
        QMessageBox msgBox;
         msgBox.setText("This is the last video!");
         msgBox.exec();
    }
    else
    {
        TheButtonInfo* bi = & infos -> at (inext );
        emit jumpTo(bi);
    }

}


void ThePlayer::getPrev () {
    int inext = onPlay - 1;
    printf("%d\n", inext);

    if (inext == -1)
    {
         QMessageBox msgBox;
         msgBox.setText("This is the first video!");
         msgBox.exec();
    }
    else
    {
        TheButtonInfo* bi = & infos -> at (inext );
        emit jumpTo(bi);
    }

}

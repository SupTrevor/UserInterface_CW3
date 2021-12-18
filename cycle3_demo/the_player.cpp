#include "the_player.h"

// all buttons have been setup, store pointers here


// change the image and video for one button every one second
//void ThePlayer::shuffle() {
//    TheButtonInfo* i = & infos -> at (rand() % infos->size() );
////        setMedia(*i->url);
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

//void ThePlayer::jumpTo (TheButtonInfo* button) {
//    setMedia( * button -> url);
//    play();
//}

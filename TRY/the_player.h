#ifndef THE_PLAYER_H
#define THE_PLAYER_H

#include <QApplication>
#include <QMediaPlayer>
#include <vector>
#include <QTimer>

class ThePlayer : public QMediaPlayer {

Q_OBJECT

private:
    QTimer* mTimer;
    long updateCount = 0;

public:
    ThePlayer() : QMediaPlayer(NULL) {
        setVolume(0); // be slightly less annoying
        connect (this, SIGNAL (stateChanged(QMediaPlayer::State)), this, SLOT (playStateChanged(QMediaPlayer::State)) );

//        mTimer = new QTimer(NULL);
//        mTimer->setInterval(1000); // 1000ms is one second between ...
//        mTimer->start();
//        connect( mTimer, SIGNAL (timeout()), SLOT ( shuffle() ) ); // ...running shuffle method
    }

    // all buttons have been setup, store pointers here

private slots:

    // change the image and video for one button every one second
//    void shuffle();

    void playStateChanged (QMediaPlayer::State ms);

};

#endif // THE_PLAYER_H

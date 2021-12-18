#ifndef THE_BUTTON_H
#define THE_BUTTON_H

#include <QPushButton>
#include <QUrl>
#include <string>

class TheButtonInfo {

public:
    QUrl* url; // video file to play
    QIcon* icon; // icon to display
    int id;
    std::string name;
//    class TheButton* getButton();
    TheButtonInfo ( QUrl* url, QIcon* icon) : url (url), icon (icon) {}
    class TheButton *button;
};

class TheButton : public QPushButton {
    Q_OBJECT

public:
    TheButtonInfo* info;


     TheButton(QWidget *parent) :  QPushButton(parent) {
         setIconSize(QSize(200,110));
         connect(this, SIGNAL(released()), this, SLOT (clicked() )); // if QPushButton clicked...then run clicked() below
    }

    void init(TheButtonInfo* i);

   // TheButton* getNext(TheButton *button);
   // TheButton* getPrev(TheButton *button);

private slots:
    void clicked();

public slots:
    void addinQueue(TheButtonInfo *info);

signals:
    void jumpTo(TheButtonInfo*);
    void jumpTo2(TheButtonInfo*);
    //void test(TheButtonInfo *);
};


#endif // THE_BUTTON_H

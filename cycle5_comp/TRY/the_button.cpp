
#include "the_button.h"
#include <QDebug>
#include "main.h"

void TheButton::init(TheButtonInfo* i) {
    setIcon( *(i->icon) );
    info =  i;
}


void TheButton::clicked() {
    if (info->name == "folderButton")
    {
        emit jumpTo2(info);
        qDebug() << "clicked folderButton" <<endl;
    }
    else
    {
        emit jumpTo(info);
        qDebug() << "clicked scrollAreaButton" <<endl;
    }
}

//void TheButton::pressed() {
//    emit jumpTo2(info);
//}

//void TheButton::test(TheButtonInfo *) {
//    emit clicked();
//}

//TheButton * TheButtonInfo::getButton() {
//    return this->button;
//}

//TheButton* TheButton::getNext(TheButton *button, std::vector<TheButton*> buttons) {

//}


void TheButton::addinQueue(TheButtonInfo *info) {
        // qDebug() << "hehe " << endl;
        // videos -> push_back( *info );
        // qDebug() << "nono" << endl;
        // TheButton *b = info->button;
        // buttons->push_back(b);
        // loadList();
    int flag = 0;
    if (info->name == "folderButton")
    {
        flag = 1;
    }
    qDebug() << flag << "!!" << endl;
    realAdd(info);
}

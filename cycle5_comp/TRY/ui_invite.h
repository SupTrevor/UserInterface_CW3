/********************************************************************************
** Form generated from reading UI file 'invite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITE_H
#define UI_INVITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Invite
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Invite)
    {
        if (Invite->objectName().isEmpty())
            Invite->setObjectName(QStringLiteral("Invite"));
        Invite->resize(400, 300);
        buttonBox = new QDialogButtonBox(Invite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Invite);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 311, 31));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        label_2 = new QLabel(Invite);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 101, 16));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Arial\";"));
        label_3 = new QLabel(Invite);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 341, 16));
        label_3->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));
        pushButton = new QPushButton(Invite);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 100, 93, 28));
        pushButton->setStyleSheet(QStringLiteral("font: \"Arial\";"));

        retranslateUi(Invite);
        QObject::connect(buttonBox, SIGNAL(accepted()), Invite, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Invite, SLOT(reject()));

        QMetaObject::connectSlotsByName(Invite);
    } // setupUi

    void retranslateUi(QDialog *Invite)
    {
        Invite->setWindowTitle(QApplication::translate("Invite", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Invite", "Invite friends to your project:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Invite", "URL links:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Invite", "https://www.youtube.com/watch?v=aAkMkVFwAoo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Invite", "Copy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Invite: public Ui_Invite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITE_H

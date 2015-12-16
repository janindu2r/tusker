/********************************************************************************
** Form generated from reading UI file 'newtask.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTASK_H
#define UI_NEWTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTask
{
public:

    void setupUi(QWidget *NewTask)
    {
        if (NewTask->objectName().isEmpty())
            NewTask->setObjectName(QStringLiteral("NewTask"));
        NewTask->resize(400, 300);

        retranslateUi(NewTask);

        QMetaObject::connectSlotsByName(NewTask);
    } // setupUi

    void retranslateUi(QWidget *NewTask)
    {
        NewTask->setWindowTitle(QApplication::translate("NewTask", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class NewTask: public Ui_NewTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTASK_H

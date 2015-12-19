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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTask
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *saveNewBtn;

    void setupUi(QWidget *NewTask)
    {
        if (NewTask->objectName().isEmpty())
            NewTask->setObjectName(QStringLiteral("NewTask"));
        NewTask->resize(400, 169);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewTask->sizePolicy().hasHeightForWidth());
        NewTask->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NewTask);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(NewTask);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(NewTask);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        saveNewBtn = new QPushButton(NewTask);
        saveNewBtn->setObjectName(QStringLiteral("saveNewBtn"));

        verticalLayout->addWidget(saveNewBtn);


        retranslateUi(NewTask);

        QMetaObject::connectSlotsByName(NewTask);
    } // setupUi

    void retranslateUi(QWidget *NewTask)
    {
        NewTask->setWindowTitle(QApplication::translate("NewTask", "Form", 0));
        saveNewBtn->setText(QApplication::translate("NewTask", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class NewTask: public Ui_NewTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTASK_H

/*

   Copyright (c) 2006-2007, Johan Thelin
   
   All rights reserved.
   
   Redistribution and use in source and binary forms, with or without modification, 
   are permitted provided that the following conditions are met:
   
       * Redistributions of source code must retain the above copyright notice, 
         this list of conditions and the following disclaimer.
       * Redistributions in binary form must reproduce the above copyright notice,  
         this list of conditions and the following disclaimer in the documentation 
         and/or other materials provided with the distribution.
       * Neither the name of APress nor the names of its contributors 
         may be used to endorse or promote products derived from this software 
         without specific prior written permission.
   
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
*/

/********************************************************************************
** Form generated from reading UI file 'filterdialog.ui'
**
** Created: Tue Jul 15 16:23:38 2014
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERDIALOG_H
#define UI_FILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterDialog
{
public:
    QHBoxLayout *hboxLayout;
    QListWidget *filterList;
    QVBoxLayout *vboxLayout;
    QLabel *originalLabel;
    QLabel *filteredLabel;

    void setupUi(QDialog *FilterDialog)
    {
        if (FilterDialog->objectName().isEmpty())
            FilterDialog->setObjectName(QString::fromUtf8("FilterDialog"));
        FilterDialog->resize(869, 502);
        hboxLayout = new QHBoxLayout(FilterDialog);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        filterList = new QListWidget(FilterDialog);
        filterList->setObjectName(QString::fromUtf8("filterList"));
        filterList->setSelectionBehavior(QAbstractItemView::SelectRows);

        hboxLayout->addWidget(filterList);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        originalLabel = new QLabel(FilterDialog);
        originalLabel->setObjectName(QString::fromUtf8("originalLabel"));

        vboxLayout->addWidget(originalLabel);

        filteredLabel = new QLabel(FilterDialog);
        filteredLabel->setObjectName(QString::fromUtf8("filteredLabel"));

        vboxLayout->addWidget(filteredLabel);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(FilterDialog);

        QMetaObject::connectSlotsByName(FilterDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterDialog)
    {
        FilterDialog->setWindowTitle(QApplication::translate("FilterDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        originalLabel->setText(QString());
        filteredLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FilterDialog: public Ui_FilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERDIALOG_H

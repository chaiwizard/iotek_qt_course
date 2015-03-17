/********************************************************************************
** Form generated from reading UI file 'orderform.ui'
**
** Created: Mon Jul 14 17:51:27 2014
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERFORM_H
#define UI_ORDERFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrderForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QSpinBox *quantity;
    QLabel *label_3;
    QDoubleSpinBox *price;
    QLabel *label_4;
    QDoubleSpinBox *total;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrderForm)
    {
        if (OrderForm->objectName().isEmpty())
            OrderForm->setObjectName(QString::fromUtf8("OrderForm"));
        OrderForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(OrderForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(OrderForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(OrderForm);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        label_2 = new QLabel(OrderForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        quantity = new QSpinBox(OrderForm);
        quantity->setObjectName(QString::fromUtf8("quantity"));

        formLayout->setWidget(1, QFormLayout::FieldRole, quantity);

        label_3 = new QLabel(OrderForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        price = new QDoubleSpinBox(OrderForm);
        price->setObjectName(QString::fromUtf8("price"));

        formLayout->setWidget(2, QFormLayout::FieldRole, price);

        label_4 = new QLabel(OrderForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        total = new QDoubleSpinBox(OrderForm);
        total->setObjectName(QString::fromUtf8("total"));

        formLayout->setWidget(3, QFormLayout::FieldRole, total);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(OrderForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OrderForm);
        QObject::connect(price, SIGNAL(valueChanged(double)), OrderForm, SLOT(updateTotal()));
        QObject::connect(quantity, SIGNAL(valueChanged(int)), OrderForm, SLOT(updateTotal()));
        QObject::connect(buttonBox, SIGNAL(accepted()), OrderForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrderForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrderForm);
    } // setupUi

    void retranslateUi(QDialog *OrderForm)
    {
        OrderForm->setWindowTitle(QApplication::translate("OrderForm", "Order Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OrderForm", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OrderForm", "Quantity:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OrderForm", "Price:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OrderForm", "Total:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OrderForm: public Ui_OrderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERFORM_H

#include "ListDemo.h"

#include <QDebug>
#include <QLabel>
#include <QVBoxLayout>
#include <QListWidget>

ListDemoWidget::ListDemoWidget(QWidget *parent)
	:QWidget(parent)
{
	QVBoxLayout *mainLayout = new QVBoxLayout;

	m_info = new QLabel("item msg here");
	mainLayout->addWidget(m_info);

	m_list = new QListWidget;
	mainLayout->addWidget(m_list);

	QListWidgetItem *item = new QListWidgetItem;
	item->setText("Zhangsan");
	m_list->addItem(item);

	item = new QListWidgetItem("Lisi");
	m_list->addItem(item);

	connect(m_list,SIGNAL(itemClicked(QListWidgetItem*)),
			this,SLOT(onItemClicked(QListWidgetItem*)));

	setLayout(mainLayout);
}

ListDemoWidget::~ListDemoWidget()
{
}

void ListDemoWidget::onItemClicked(QListWidgetItem *item)
{
	QString text = item->text();
	qDebug() << text << endl;
	m_info->setText(text);
}

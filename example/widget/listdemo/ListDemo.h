#ifndef _LIST_DEMO_H_
#define _LIST_DEMO_H_

#include <QWidget>

class QLabel;
class QListWidget;
class QListWidgetItem;

class ListDemoWidget : public QWidget{
	Q_OBJECT
public:
	ListDemoWidget(QWidget *parent = 0);
	~ListDemoWidget();

private slots:
	void onItemClicked(QListWidgetItem * item);

private:
	int m_data;

	QListWidget *m_list;
	QLabel *m_info;

};

#endif

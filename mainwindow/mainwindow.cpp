#include "mainwindow.h"

#include <QAction>
#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow()
{
	m_open = new QAction("Open",this);
	fileMenu = menuBar()->addMenu("File");
	fileMenu->addAction(m_open);
}

MainWindow::~MainWindow()
{

}

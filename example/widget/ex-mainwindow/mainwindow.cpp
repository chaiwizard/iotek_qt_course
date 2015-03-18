/*************************************************************************
 *
 * Copyright (c) 2008-2011, Nokia Corporation and/or its subsidiary(-ies).
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

#include "mainwindow.h"

#include <QApplication>
#include <QMenu>
#include <QToolBar>
#include <QAction>
#include <QDebug>
#include <QLabel>
#include <QListWidget>
#include <QDockWidget>
#include <QMenuBar>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Main Window Example");

    // set the central widget
    QLabel *label = new QLabel("Central Widget", this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);

    // call varius setup functions
    setupActions();
    setupMenuBar();
    setupToolBar();
    setupStatusBar();
    setupDockWindow();
}

void MainWindow::setupActions()
{
    // create all actions and connect them with prepared slots
    // the icons come from the oxygen theme and uses qt resource aliases
    // without alias QIcon(":/icons/document-new.png")
    m_fileNew = new QAction(QIcon(":new"), "New", this);
    m_fileNew->setShortcuts(QKeySequence::New);
    connect(m_fileNew, SIGNAL(triggered()), this, SLOT(onFileNew()));

    m_fileOpen = new QAction(QIcon(":open"), "Open", this);
    m_fileOpen->setShortcuts(QKeySequence::Open);
    connect(m_fileOpen, SIGNAL(triggered()), this, SLOT(onFileOpen()));

    m_fileSave = new QAction(QIcon(":save"), "Save", this);
    m_fileSave->setShortcuts(QKeySequence::Open);
    connect(m_fileSave, SIGNAL(triggered()), this, SLOT(onFileSave()));

    m_fileSaveAs = new QAction(QIcon(":save-as"), "Save As", this);
    m_fileSaveAs->setShortcuts(QKeySequence::SaveAs);
    connect(m_fileSaveAs, SIGNAL(triggered()), this, SLOT(onFileSaveAs()));

    m_fileExit = new QAction(QIcon(":exit"), "Exit", this);
    m_fileExit->setShortcuts(QKeySequence::Quit);
    connect(m_fileExit, SIGNAL(triggered()), qApp, SLOT(quit()));

    m_editUndo = new QAction(QIcon(":undo"), "Undo", this);
    m_editUndo->setShortcuts(QKeySequence::Undo);

    m_editRedo = new QAction(QIcon(":redo"), "Redo", this);
    m_editRedo->setShortcuts(QKeySequence::Redo);

    m_editCut = new QAction(QIcon(":cut"), "Cut", this);
    m_editCut->setShortcuts(QKeySequence::Cut);

    m_editCopy = new QAction(QIcon(":copy"), "Copy", this);
    m_editCopy->setShortcuts(QKeySequence::Copy);

    m_editPaste = new QAction(QIcon(":paste"), "Paste", this);
    m_editPaste->setShortcuts(QKeySequence::Cut);

    m_helpAbout = new QAction("About", this);
    connect(m_helpAbout, SIGNAL(triggered()), this, SLOT(onHelpAbout()));
    m_helpAboutQt = new QAction("About Qt", this);
}

void MainWindow::setupMenuBar()
{
    // add actions to the file, edit and help menus
    m_fileMenu = menuBar()->addMenu("File");
    m_fileMenu->addAction(m_fileNew);
    m_fileMenu->addSeparator();
    m_fileMenu->addAction(m_fileOpen);
    m_fileMenu->addAction(m_fileSave);
    m_fileMenu->addAction(m_fileSaveAs);
    m_fileMenu->addSeparator();
    m_fileMenu->addAction(m_fileExit);

    m_editMenu = menuBar()->addMenu("Edit");
    m_editMenu->addAction(m_editUndo);
    m_editMenu->addAction(m_editRedo);
    m_editMenu->addSeparator();
    m_editMenu->addAction(m_editCut);
    m_editMenu->addAction(m_editCopy);
    m_editMenu->addAction(m_editPaste);

    m_helpMenu = menuBar()->addMenu("Help");
    m_helpMenu->addAction(m_helpAbout);
    m_helpMenu->addAction(m_helpAboutQt);
}

void MainWindow::setupToolBar()
{
    // create our only toolbar
    m_toolBar = addToolBar("Standard");
    m_toolBar->addAction(m_fileNew);
    m_toolBar->addAction(m_fileOpen);
    m_toolBar->addAction(m_fileSave);
}

void MainWindow::setupStatusBar()
{
    // create statusbar and set message
    QStatusBar *bar = statusBar();
    // message will vanish after 10secs
    bar->showMessage("Ready...", 10000);
}

void MainWindow::setupDockWindow()
{
    // setup a dock window on the right with a list widget
    QDockWidget *dock = new QDockWidget("DockWidget", this);

    QListWidget *widget = new QListWidget(dock);
    widget->addItem("Dock Content");
    dock->setWidget(widget);

    addDockWidget(Qt::RightDockWidgetArea, dock);
}

void MainWindow::onFileNew()
{
    qDebug() << "onFileNew()";
}

void MainWindow::onFileOpen()
{
    qDebug() << "onFileOpen()";
}

void MainWindow::onFileSave()
{
    qDebug() << "onFileSave()";
}

void MainWindow::onFileSaveAs()
{
    qDebug() << "onFileSaveAs()";
}

void MainWindow::onHelpAbout()
{
    qDebug() << "onHelpAbout()";
}

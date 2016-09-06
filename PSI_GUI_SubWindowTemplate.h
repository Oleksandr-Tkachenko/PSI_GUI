/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_SubWindow.h
 * Author: alex
 *
 * Created on August 27, 2016, 12:47 PM
 */

#ifndef PSI_GUI_SUBWINDOWTEMPLATE_H
#define PSI_GUI_SUBWINDOWTEMPLATE_H

#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include <QtGui/QFileDialog>

#include <stdio.h>

#include "ui_subwindow.h"

#define RESOURCES_DIR "~/.PSI_GUI/images/images.qrb"

class PSI_GUI_SubWindowTemplate : public QWidget {
    Q_OBJECT

public slots:
    void PSI_GUI_goBack();
    void PSI_GUI_BrowserPathA();
    void PSI_GUI_BrowserPathB();
    void PSI_GUI_BrowserPathResultA();
    void PSI_GUI_BrowserPathResultB();
    void PSI_GUI_BrowserPathBuckets();
    void PSI_GUI_go();


public:
    PSI_GUI_SubWindowTemplate(QWidget * parent = 0, QWidget * main = 0);
    virtual ~PSI_GUI_SubWindowTemplate();
protected:
    PSI_GUI_SubWindowTemplate(QWidget * parent = 0);

    void PSI_GUI_HandleFileBrowserButton(QLineEdit * l, bool isFile);
    void PSI_GUI_HideSeeds();
    void PSI_GUI_HideResultA();
    void PSI_GUI_HideResultB();
    void PSI_GUI_HideRecursiveDeepnessLimit();
    void PSI_GUI_HideHashTableFeatures();
    void PSI_GUI_HideNetworkFeatures();
    void PSI_GUI_HideWriteBufferSize();
    void PSI_GUI_HidePathB();
    void PSI_GUI_HideBucketN();
    void PSI_GUI_HidePathBuckets();
    void PSI_GUI_HideQueueBufferSize();
    void PSI_GUI_HideElementSize();
    void PSI_GUI_HideThreads();
    void PSI_GUI_NH_Hide();
    
    void PSI_GUI_Execute(char * command);

    Ui::Form ui;
    QWidget * main;
    QWidget * window;
    char command[512];

    virtual bool PSI_GUI_selfCheck() = 0;

    virtual void PSI_GUI_postExecution() {
    };

    void PSI_GUI_disableInterface();
    void PSI_GUI_enableInterface();

    void PSI_GUI_getPathFile(QString * path);
    void PSI_GUI_getPathDirectory(QString * path);

    void PSI_GUI_connectFileBrowserButtons();
    void PSI_GUI_connectAllButtons();
    void PSI_GUI_connectStartButton();
    void PSI_GUI_connectBackButton();

    void PSI_GUI_getCStr(QString qs, char * s);

    bool PSI_GUI_checkOnlyDigits();
    bool PSI_GUI_LineEditOnlyDigits(QLineEdit * l);

    void PSI_GUI_start();
    void PSI_GUI_composeSeed(QLineEdit * q, const char * pattern, char * seed);
    void PSI_GUI_composeIfGreater0(char* arg, const char* pattern);
};
#endif /* PSI_GUI_SUBWINDOWTEMPLATE_H */


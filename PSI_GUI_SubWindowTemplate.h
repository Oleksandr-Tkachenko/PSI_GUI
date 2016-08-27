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

#include <stdio.h>

#include "ui_subwindow.h"

class PSI_GUI_SubWindowTemplate : public QWidget {
    Q_OBJECT

public slots:
    void PSI_GUI_goBack();

public:
    PSI_GUI_SubWindowTemplate(QWidget * parent = 0);
    PSI_GUI_SubWindowTemplate(QWidget * parent = 0, QWidget * main = 0);
    virtual ~PSI_GUI_SubWindowTemplate();
    void PSI_GUI_connectToBackButton();
protected:
    void PSI_GUI_HideSeeds();
    void PSI_GUI_HideResultB();
    void PSI_GUI_HideRecursiveDeepnessLimit();
    void PSI_GUI_HideHashTableFeatures();
    void PSI_GUI_HideNetworkFeatures();
    void PSI_GUI_HideWriteBufferSize();
    Ui::Form ui;
    QWidget * main;
    QWidget * window;
};

class PSI_WindowHandler {
public:
    static void addBackButton(PSI_GUI_SubWindowTemplate * w2);
private:

    PSI_WindowHandler() {
    }

    virtual ~PSI_WindowHandler() {
    }
};

#endif /* PSI_GUI_SUBWINDOWTEMPLATE_H */


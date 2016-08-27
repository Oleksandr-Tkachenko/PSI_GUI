/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_I_Window.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 6:58 PM
 */

#include <QResource>

#include "PSI_GUI_I_Window.h"

PSI_GUI_I_Window::PSI_GUI_I_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    QResource::registerResource("images.rcc");
    PSI_WindowHandler::addBackButton(this);
    ui.windowLabel->setText("PSI Intersection");
    PSI_GUI_HideSeeds();
    PSI_GUI_HideResultB();
    PSI_GUI_HideRecursiveDeepnessLimit();
    PSI_GUI_HideHashTableFeatures();
    PSI_GUI_HideNetworkFeatures();
    PSI_GUI_HideWriteBufferSize();
}

PSI_GUI_I_Window::~PSI_GUI_I_Window() {
}


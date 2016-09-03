/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_OT_Window.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 6:59 PM
 */

#include "PSI_GUI_OT_Window.h"

PSI_GUI_OT_Server_Window::PSI_GUI_OT_Server_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource("images.rcc");
    ui.windowLabel->setText("PSI Oblivious Transfer Server");
}

PSI_GUI_OT_Server_Window::~PSI_GUI_OT_Server_Window() {
}

bool PSI_GUI_OT_Server_Window::PSI_GUI_selfCheck() {
    return true;
}

PSI_GUI_OT_Client_Window::PSI_GUI_OT_Client_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource("images.rcc");
    ui.windowLabel->setText("PSI Oblivious Transfer Client");
}

PSI_GUI_OT_Client_Window::~PSI_GUI_OT_Client_Window() {
}

bool PSI_GUI_OT_Client_Window::PSI_GUI_selfCheck() {
    return true;
}

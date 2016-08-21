/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_MainWindow.cpp
 * Author: alex
 * 
 * Created on August 20, 2016, 5:29 PM
 */

#include "PSI_MainWindow.h"

PSI_MainWindow::PSI_MainWindow(QWidget* parent) : QWidget(parent) {
    w = new QWidget();
    ui.setupUi(w);
    w->show();
    connect(ui.OKButton, SIGNAL(clicked(bool)), this, SLOT(on_OKButton_released()));
}

PSI_MainWindow::~PSI_MainWindow() {
}

void PSI_MainWindow::on_OKButton_released() {
    w->close();
    switch (ui.comboBox->currentIndex()) {
        case 0:
            w = getWindow(new PSI_IntersectionWindow);
            break;
        case 1:
            w = getWindow(new PSI_CuckooHashingWindow);
            break;
        case 2:
            w = getWindow(new PSI_SimpleHashingWindow);
            break;
        case 3:
            w = getWindow(new PSI_NaiveHashingServerWindow);
            break;
        case 4:
            w = getWindow(new PSI_NaiveHashingClientWindow);
            break;
        case 5:
            w = getWindow(new PSI_ObliviousTransferServerWindow);
            break;
        case 6:
            w = getWindow(new PSI_ObliviousTransferClientWindow);
            break;
    }
}

QWidget * PSI_MainWindow::getWindow(QWidget* w) {
    w->show();
    return w;
}
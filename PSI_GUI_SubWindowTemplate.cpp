/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_SubWindow.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 12:47 PM
 */

#include "PSI_GUI_SubWindowTemplate.h"

PSI_GUI_SubWindowTemplate::PSI_GUI_SubWindowTemplate(QWidget* parent) : QWidget(parent) {
}

PSI_GUI_SubWindowTemplate::PSI_GUI_SubWindowTemplate(QWidget* parent, QWidget * main) : QWidget(parent) {
    this->main = main;
}

PSI_GUI_SubWindowTemplate::~PSI_GUI_SubWindowTemplate() {
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_goBack() {
    this->hide();
    main->show();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_connectToBackButton() {
    connect(ui.backButton, SIGNAL(clicked(bool)), this, SLOT(PSI_GUI_goBack()));
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideSeeds() {
    ui.labelSeed1->hide();
    ui.labelSeed2->hide();
    ui.labelSeed3->hide();
    ui.lineEditHashSeed1->hide();
    ui.lineEditHashSeed2->hide();
    ui.lineEditHashSeed3->hide();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideResultB() {
    ui.labelPathResultB->hide();
    ui.lineEditPathResultB->hide();
    ui.browserPathResultButtonB->hide();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideRecursiveDeepnessLimit() {
    ui.labelRecursiveDeepnessLimit->hide();
    ui.lineEditRecursiveDeepnessLimit->hide();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideHashTableFeatures() {
    ui.labelTableSize->hide();
    ui.labelTableSizeMultiplier->hide();
    ui.lineEditTableSize->hide();
    ui.lineEditTableSizeMultiplier->hide();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideNetworkFeatures() {
    ui.labelIP->hide();
    ui.labelPort->hide();
    ui.lineEditIP->hide();
    ui.lineEditPort->hide();
}

void PSI_GUI_SubWindowTemplate::PSI_GUI_HideWriteBufferSize() {
    ui.labelWriteBufferSize->hide();
    ui.lineEditWriteBufferSize->hide();
}


void PSI_WindowHandler::addBackButton(PSI_GUI_SubWindowTemplate * widget) {
    widget->PSI_GUI_connectToBackButton();
}

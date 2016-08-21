/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubWindows.cpp
 * Author: alex
 * 
 * Created on August 21, 2016, 5:07 PM
 */

#include "PSI_SubWindows.h"

QWidget * PSI_WindowHandler::configureWindowSize(QWidget* w) {
    w->setFixedSize(640, 480);
    return w;
}

//################## PSI_IntersectionWindow ##################################

PSI_IntersectionWindow::PSI_IntersectionWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_IntersectionWindow");
}

PSI_IntersectionWindow::~PSI_IntersectionWindow() {
}


//################## PSI_CuckooHashingWindow ##################################

PSI_CuckooHashingWindow::PSI_CuckooHashingWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_CuckooHashingWindow");
}

PSI_CuckooHashingWindow::~PSI_CuckooHashingWindow() {
}


//################## PSI_SimpleHashingWindow ##################################

PSI_SimpleHashingWindow::PSI_SimpleHashingWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_SimpleHashingWindow");
}

PSI_SimpleHashingWindow::~PSI_SimpleHashingWindow() {
}


//################## PSI_NaiveHashingServerWindow ##################################

PSI_NaiveHashingServerWindow::PSI_NaiveHashingServerWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_NaiveHashingServerWindow");
}

PSI_NaiveHashingServerWindow::~PSI_NaiveHashingServerWindow() {
}


//################## PSI_NaiveHashingClientWindow ##################################

PSI_NaiveHashingClientWindow::PSI_NaiveHashingClientWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_NaiveHashingClientWindow");
}

PSI_NaiveHashingClientWindow::~PSI_NaiveHashingClientWindow() {
}


//################## PSI_ObliviousTransferServerWindow ##################################

PSI_ObliviousTransferServerWindow::PSI_ObliviousTransferServerWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_ObliviousTransferServerWindow");
}

PSI_ObliviousTransferServerWindow::~PSI_ObliviousTransferServerWindow() {
}


//################## PSI_ObliviousTransferClientWindow ##################################

PSI_ObliviousTransferClientWindow::PSI_ObliviousTransferClientWindow(QWidget* parent) : QWidget(parent) {
    PSI_WindowHandler::configureWindowSize(this);
    QLabel * l = new QLabel(this);
    l->setText("PSI_ObliviousTransferClientWindow");
}

PSI_ObliviousTransferClientWindow::~PSI_ObliviousTransferClientWindow() {
}
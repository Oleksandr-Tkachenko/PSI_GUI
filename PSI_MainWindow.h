/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_MainWindow.h
 * Author: alex
 *
 * Created on August 20, 2016, 5:29 PM
 */

#ifndef PSI_MAINWINDOW_H
#define PSI_MAINWINDOW_H

#include <iostream>
#include <stdio.h>

#include "ui_window.h"
#include "PSI_SubWindows.h"

class PSI_MainWindow : public QWidget{
    Q_OBJECT
public:
    explicit PSI_MainWindow(QWidget * parent = 0);
    virtual ~PSI_MainWindow();
private:
    QWidget *w;
    Ui::PSI ui;
    QWidget * getWindow(QWidget * w);
private slots:
    void on_OKButton_released();
};

#endif /* PSI_MAINWINDOW_H */


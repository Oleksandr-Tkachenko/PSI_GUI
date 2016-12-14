/* 
 * File:   PSI_MainWindow.h
 * Author: alex
 *
 * Created on August 20, 2016, 5:29 PM
 */

#ifndef PSI_GUI_MAINWINDOW_H
#define PSI_GUI_MAINWINDOW_H

#include <iostream>
#include <stdio.h>

#include "ui_window.h"
#include "PSI_GUI_CH_Window.h"
#include "PSI_GUI_I_Window.h"
#include "PSI_GUI_NH_Window.h"
#include "PSI_GUI_OT_Window.h"
#include "PSI_GUI_SH_Window.h"
#include "PSI_GUI_DEMO_Window.h"

class PSI_MainWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_MainWindow(QWidget * parent = 0);
    virtual ~PSI_MainWindow();
private:
    QWidget *mainWindow;
    QWidget *subWindow;
    Ui::PSI ui;
    PSI_GUI_SubWindowTemplate * getWindow(PSI_GUI_SubWindowTemplate * w);
private slots:
    void on_OKButton_released();
};

#endif /* PSI_GUI_MAINWINDOW_H */


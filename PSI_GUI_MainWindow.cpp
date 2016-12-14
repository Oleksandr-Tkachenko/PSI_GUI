/* 
 * File:   PSI_MainWindow.cpp
 * Author: alex
 * 
 * Created on August 20, 2016, 5:29 PM
 */

#include "PSI_GUI_MainWindow.h"

PSI_MainWindow::PSI_MainWindow(QWidget* parent) : QWidget(parent) {
    mainWindow = new QWidget();
    ui.setupUi(mainWindow);
    mainWindow->show();
    connect(ui.OKButton, SIGNAL(clicked(bool)), this, SLOT(on_OKButton_released()));
    while (0) {
        while (!subWindow->isHidden()) {
        }
        delete subWindow;
        mainWindow->show();
    }
}

PSI_MainWindow::~PSI_MainWindow() {
}

void PSI_MainWindow::on_OKButton_released() {
    mainWindow->hide();
    switch (ui.comboBox->currentIndex()) {
        case 0:
            subWindow = getWindow(new PSI_GUI_I_Window(0, mainWindow));
            break;
        case 1:
            subWindow = getWindow(new PSI_GUI_CH_Window(0, mainWindow));
            break;
        case 2:
            subWindow = getWindow(new PSI_GUI_SH_Window(0, mainWindow));
            break;
        case 3:
            subWindow = getWindow(new PSI_GUI_NH_Server_Window(0, mainWindow));
            break;
        case 4:
            subWindow = getWindow(new PSI_GUI_NH_Client_Window(0, mainWindow));
            break;
        case 5:
            subWindow = getWindow(new PSI_GUI_OT_Server_Window(0, mainWindow));
            break;
        case 6:
            subWindow = getWindow(new PSI_GUI_OT_Client_Window(0, mainWindow));
            break;
        case 7:
            subWindow = getWindow(new PSI_GUI_DEMO_Server_Window(0, mainWindow));
            break;
        case 8:
            subWindow = getWindow(new PSI_GUI_DEMO_Client_Window(0, mainWindow));
            break;
    }
}

PSI_GUI_SubWindowTemplate * PSI_MainWindow::getWindow(PSI_GUI_SubWindowTemplate* w) {
    w->show();
    return w;
}
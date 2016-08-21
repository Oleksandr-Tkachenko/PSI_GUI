/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: alex
 *
 * Created on August 20, 2016, 12:50 PM
 */

#include <QtGui/QWidget>
#include <QtUiTools/QtUiTools>

#include "ui_window.h"
#include "PSI_MainWindow.h"

int main(int argc, char *argv[]) {
    if (argc > 1)
        return EXIT_FAILURE;

    QApplication app(argc, argv);
    PSI_MainWindow *mainWindow = new PSI_MainWindow;
    //mainWindow->show();
    //Ui::PSI ui;
    return app.exec();
}



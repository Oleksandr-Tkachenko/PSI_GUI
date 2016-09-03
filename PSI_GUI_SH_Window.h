/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_SH_Window.h
 * Author: alex
 *
 * Created on August 27, 2016, 6:57 PM
 */

#ifndef PSI_GUI_SH_WINDOW_H
#define PSI_GUI_SH_WINDOW_H


#include <QtGui/QWidget>
#include <QResource>

#include "PSI_GUI_SubWindowTemplate.h"

class PSI_GUI_SH_Window : public PSI_GUI_SubWindowTemplate {
    Q_OBJECT
public:
    explicit PSI_GUI_SH_Window(QWidget * parent = 0, QWidget * main = 0);
    virtual ~PSI_GUI_SH_Window();
protected:
    bool PSI_GUI_selfCheck();
};

#endif /* PSI_GUI_SH_WINDOW_H */


/* 
 * File:   PSI_GUI_OT_Window.h
 * Author: alex
 *
 * Created on August 27, 2016, 6:59 PM
 */

#ifndef PSI_GUI_OT_WINDOW_H
#define PSI_GUI_OT_WINDOW_H

#include <QtGui/QWidget>
#include <QResource>

#include "PSI_GUI_SubWindowTemplate.h"

class PSI_GUI_OT_Server_Window : public PSI_GUI_SubWindowTemplate {
    Q_OBJECT
public:
    explicit PSI_GUI_OT_Server_Window(QWidget * parent = 0, QWidget * main = 0);
    virtual ~PSI_GUI_OT_Server_Window();
protected:
    bool PSI_GUI_selfCheck();
    void PSI_GUI_postExecution();
};

class PSI_GUI_OT_Client_Window : public PSI_GUI_SubWindowTemplate {
    Q_OBJECT
public:
    explicit PSI_GUI_OT_Client_Window(QWidget * parent = 0, QWidget * main = 0);
    virtual ~PSI_GUI_OT_Client_Window();
protected:
    bool PSI_GUI_selfCheck();
    void PSI_GUI_postExecution();
};

#endif /* PSI_GUI_OT_WINDOW_H */


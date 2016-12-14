#ifndef PSI_GUI_CH_WINDOW_H
#define PSI_GUI_CH_WINDOW_H

#include <QtGui/QWidget>
#include <QResource>

#include "PSI_GUI_SubWindowTemplate.h"

class PSI_GUI_CH_Window : public PSI_GUI_SubWindowTemplate {
    Q_OBJECT
public:
    explicit PSI_GUI_CH_Window(QWidget * parent = 0, QWidget * main = 0);
    virtual ~PSI_GUI_CH_Window();
protected:
    bool PSI_GUI_selfCheck();
};

#endif /* PSI_GUI_CH_WINDOW_H */


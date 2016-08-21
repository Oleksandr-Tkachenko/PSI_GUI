/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubWindows.h
 * Author: alex
 *
 * Created on August 21, 2016, 5:07 PM
 */

#ifndef SUBWINDOWS_H
#define SUBWINDOWS_H

#include <QtGui/QWidget>
#include <QtGui/QLabel>
#include <QtGui/QLayout>
#include <QtGui/QGroupBox>

class PSI_WindowHandler {
public:
    static QWidget * configureWindowSize(QWidget * w);
private:
    PSI_WindowHandler() {
    }
};

class PSI_IntersectionWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_IntersectionWindow(QWidget * parent = 0);
    virtual ~PSI_IntersectionWindow();
private:
};

class PSI_CuckooHashingWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_CuckooHashingWindow(QWidget * parent = 0);
    virtual ~PSI_CuckooHashingWindow();
private:
};

class PSI_SimpleHashingWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_SimpleHashingWindow(QWidget * parent = 0);
    virtual ~PSI_SimpleHashingWindow();
private:
};

class PSI_NaiveHashingServerWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_NaiveHashingServerWindow(QWidget * parent = 0);
    virtual ~PSI_NaiveHashingServerWindow();
private:
};

class PSI_NaiveHashingClientWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_NaiveHashingClientWindow(QWidget * parent = 0);
    virtual ~PSI_NaiveHashingClientWindow();
private:
};

class PSI_ObliviousTransferServerWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_ObliviousTransferServerWindow(QWidget * parent = 0);
    virtual ~PSI_ObliviousTransferServerWindow();
private:
};

class PSI_ObliviousTransferClientWindow : public QWidget {
    Q_OBJECT
public:
    explicit PSI_ObliviousTransferClientWindow(QWidget * parent = 0);
    virtual ~PSI_ObliviousTransferClientWindow();
private:
};
#endif /* SUBWINDOWS_H */


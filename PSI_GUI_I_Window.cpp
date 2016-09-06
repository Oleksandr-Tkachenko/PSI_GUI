/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_I_Window.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 6:58 PM
 */

#include "PSI_GUI_I_Window.h"

PSI_GUI_I_Window::PSI_GUI_I_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource(RESOURCES_DIR);
    ui.windowLabel->setText("PSI Intersection");
    PSI_GUI_HideSeeds();
    PSI_GUI_HideResultB();
    PSI_GUI_HideRecursiveDeepnessLimit();
    PSI_GUI_HideHashTableFeatures();
    PSI_GUI_HideNetworkFeatures();
    PSI_GUI_HideWriteBufferSize();
}

PSI_GUI_I_Window::~PSI_GUI_I_Window() {
}

bool PSI_GUI_I_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char elem[128], path_a[128], path_b[128], path_buckets[128], bucket_n[128],
            queue_buffer_size[128], read_buffer_size[128], thread_n[128], path_result[128];

    PSI_GUI_getCStr(ui.lineEditElementSize->text(), elem);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPathB->text(), path_b);
    PSI_GUI_getCStr(ui.lineEditPathBuckets->text(), path_buckets);
    PSI_GUI_getCStr(ui.lineEditNumberOfBuckets->text(), bucket_n);
    PSI_GUI_getCStr(ui.lineEditQueueBufferSize->text(), queue_buffer_size);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);
    PSI_GUI_getCStr(ui.lineEditThreads->text(), thread_n);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result);

    snprintf(command, 511,
            "/usr/bin/psi-intersection -e %s -a \"%s\" -b \"%s\" -s \"%s\" -n "
            "%s -q %s -r %s -t %s -p \"%s\"",
            elem, path_a, path_b, path_buckets, bucket_n, queue_buffer_size,
            read_buffer_size, thread_n, path_result);

    return true;
}

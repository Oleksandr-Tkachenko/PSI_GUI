/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PSI_GUI_NH_Window.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 6:58 PM
 */

#include "PSI_GUI_NH_Window.h"
#include "PSI_GUI_CH_Window.h"

PSI_GUI_NH_Server_Window::PSI_GUI_NH_Server_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource("images.rcc");
    ui.windowLabel->setText("PSI Naive Hashing Server");

    PSI_GUI_NH_Hide();

    ui.labelPathB->setText("Path result lookup");
    ui.labelPathB->show();

    ui.labelPathResult->setText("Path result A");
}

PSI_GUI_NH_Server_Window::~PSI_GUI_NH_Server_Window() {
}

bool PSI_GUI_NH_Server_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char elem_size[128], path_a[128], path_result_a[128], path_result_b[128],
            read_buffer_size[128], thread_n[128], port[128], ip[128];

    PSI_GUI_getCStr(ui.lineEditElementSize->text(), elem_size);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result_a);
    PSI_GUI_getCStr(ui.lineEditPathResultB->text(), path_result_b);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);
    PSI_GUI_getCStr(ui.lineEditThreads->text(), thread_n);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);


    snprintf(command, 511,
            "/usr/bin/psi-naive-hashing --server -e %s -s \"%s\" -d \"%s\" -b \"%s\" "
            "-r %s -t %s -p %s -i %s",
            elem_size, path_a, path_result_a, path_result_b,
            read_buffer_size, thread_n, port, ip);

    return true;
}

void PSI_GUI_NH_Server_Window::PSI_GUI_postExecution() {
    char lookup_command[512];
    char lookup_path[128], path_a[128], path_b[128], bucket_n[128],
            path_buckets[128], queue_buffer_size[128], read_buffer_size[128],
            thread_n[128], path_result[128];

    const char * elem = HASH_SIZE;

    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPathResultB->text(), path_b);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), lookup_path);
    PSI_GUI_getCStr(ui.lineEditPathB->text(), path_result);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);
    PSI_GUI_getCStr(ui.lineEditThreads->text(), thread_n);
    PSI_GUI_getCStr(ui.lineEditPathBuckets->text(), path_buckets);
    PSI_GUI_getCStr(ui.lineEditNumberOfBuckets->text(), bucket_n);
    PSI_GUI_getCStr(ui.lineEditQueueBufferSize->text(), queue_buffer_size);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);

    if (path_buckets[strlen(path_buckets) - 1] != '/')
        strcat(path_buckets, "/");

    snprintf(lookup_command, 511,
            "/usr/bin/psi-intersection -e %s -a \"%s\" -b \"%s\" -s \"%s\" -n "
            "%s -q %s -r %s -t %s -p \"%s\" -l \"%s\"",
            elem, path_a, path_b, path_buckets, bucket_n, queue_buffer_size,
            read_buffer_size, thread_n, path_result, lookup_path);

    PSI_GUI_Execute(lookup_command);
}

PSI_GUI_NH_Client_Window::PSI_GUI_NH_Client_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource("images.rcc");
    ui.windowLabel->setText("PSI Naive Hashing Client");
    PSI_GUI_NH_Hide();
    PSI_GUI_HideResultA();
    PSI_GUI_HideResultB();
    PSI_GUI_HidePathB();
    PSI_GUI_HideBucketN();
    PSI_GUI_HidePathBuckets();
    PSI_GUI_HideQueueBufferSize();
}

PSI_GUI_NH_Client_Window::~PSI_GUI_NH_Client_Window() {
}

bool PSI_GUI_NH_Client_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char elem_size[128], path_a[128], read_buffer_size[128], thread_n[128],
            port[128], ip[128];

    PSI_GUI_getCStr(ui.lineEditElementSize->text(), elem_size);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);
    PSI_GUI_getCStr(ui.lineEditThreads->text(), thread_n);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);


    snprintf(command, 511,
            "/usr/bin/psi-naive-hashing --client -e %s -s \"%s\" -r %s -t %s -p %s -i %s",
            elem_size, path_a, read_buffer_size, thread_n, port, ip);
    return true;
}
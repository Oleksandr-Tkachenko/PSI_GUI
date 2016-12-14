/* 
 * File:   PSI_GUI_OT_Window.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 6:59 PM
 */

#include "PSI_GUI_OT_Window.h"

PSI_GUI_OT_Server_Window::PSI_GUI_OT_Server_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource(QDir::homePath().append(RESOURCES_DIR));
    ui.windowLabel->setText("PSI Oblivious Transfer Server");
    ui.labelPathA->setText("Path to Simple Hashing table");
    ui.labelPathResult->setText("Path to OT output");

    PSI_GUI_HideBucketN();
    PSI_GUI_HidePathBuckets();
    PSI_GUI_HideQueueBufferSize();
    PSI_GUI_HideRecursiveDeepnessLimit();
    PSI_GUI_HideResultB();
    PSI_GUI_HideSeeds();
    PSI_GUI_HideThreads();
    PSI_GUI_HideWriteBufferSize();
    PSI_GUI_HideReadBufferSize();
    PSI_GUI_HidePathB();
    PSI_GUI_HideReductionButton();
}

PSI_GUI_OT_Server_Window::~PSI_GUI_OT_Server_Window() {
}

bool PSI_GUI_OT_Server_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char elem_size[128], path_a[128], path_result_a[128], port[128], ip[128],
            table_size[128];

    PSI_GUI_getCStr(ui.lineEditElementSize->text(), elem_size);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result_a);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);
    PSI_GUI_getCStr(ui.lineEditTableSize->text(), table_size);


    snprintf(command, 511,
            "/usr/bin/psi-ot -r 0 -p 3  -t 1 -b %s -n %s -a %s -o %s -i %s -u %s",
            elem_size, table_size, ip, port, path_a, path_result_a);
    return true;
}

void PSI_GUI_OT_Server_Window::PSI_GUI_postExecution() {
    char command[512];
    char path_result_a[128], port[128], ip[128];

    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result_a);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);

    sprintf(path_result_a, "%s_shuffled", path_result_a);

    snprintf(command, 511,
            "exec bash -c 'while ! nc -z %s %s; do\n"
            "sleep 0.1\n"
            "done\n"
            "nc %s %s < %s'",
            ip, port,
            ip, port, path_result_a);

    PSI_GUI_Execute(command);
}

PSI_GUI_OT_Client_Window::PSI_GUI_OT_Client_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource(QDir::homePath().append(RESOURCES_DIR));
    ui.windowLabel->setText("PSI Oblivious Transfer Client");
    ui.labelPathA->setText("Path to reduced Cuckoo Hashing table");
    ui.labelPathB->setText("Path to original Cuckoo Hashing table");
    ui.labelPathResult->setText("Path to OT output");
    ui.labelPathResultB->setText("Path to server's OT output");

    PSI_GUI_HideBucketN();
    PSI_GUI_HidePathBuckets();
    PSI_GUI_HideQueueBufferSize();
    PSI_GUI_HideRecursiveDeepnessLimit();
    PSI_GUI_HideSeeds();
    PSI_GUI_HideThreads();
    PSI_GUI_HideWriteBufferSize();
    PSI_GUI_HideReadBufferSize();
    PSI_GUI_HideReductionButton();
}

PSI_GUI_OT_Client_Window::~PSI_GUI_OT_Client_Window() {
}

bool PSI_GUI_OT_Client_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char elem_size[128], path_b[128], path_result_a[128], port[128], ip[128],
            table_size[128];

    PSI_GUI_getCStr(ui.lineEditElementSize->text(), elem_size);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_b);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result_a);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);
    PSI_GUI_getCStr(ui.lineEditTableSize->text(), table_size);

    snprintf(command, 511,
            "psi-ot -r 1 -p 3 -b %s -n %s -a %s -o %s -t 1 -i %s -u %s",
            elem_size, table_size, ip, port, path_b, path_result_a);
    return true;
}

void PSI_GUI_OT_Client_Window::PSI_GUI_postExecution() {
    char command[512];
    char path_result_b[128], port[128], ip[128], path_result_a[128], path_a[128],
            path_b[128];

    PSI_GUI_getCStr(ui.lineEditPathResultB->text(), path_result_b);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result_a);
    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPathB->text(), path_b);

    snprintf(command, 511,
            "exec bash -c 'nc -l %s; nc -l -p %s -q 10 > %s'"
            , port, port, path_result_b);

    PSI_GUI_Execute(command);

    FILE * f = fopen(path_a, "rb");
    fseeko(f, 0, SEEK_END);
    uint64_t fsize = ftello(f);
    fclose(f);

    size_t input_e_size = atoi(ui.lineEditElementSize->text().toStdString().c_str()) + 1;
    size_t elem_size = 40 + log(fsize / input_e_size) / log(2) +
            log(fsize * 3 / input_e_size) / log(2);
    elem_size = (elem_size + 7) / 8;

    sprintf(command, "psi-intersection -p /tmp/res -e %zu -n 1000 -q 1000 -r 100000"
            " -s /tmp/buckets/ -t 4 -a %s -b %s -x OT -c %s -l %s -m %s",
            elem_size, path_result_a, path_result_b, path_b, path_b, path_result_a);

    PSI_GUI_Execute(command);
}
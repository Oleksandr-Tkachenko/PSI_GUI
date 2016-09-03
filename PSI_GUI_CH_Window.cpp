/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "PSI_GUI_CH_Window.h"

PSI_GUI_CH_Window::PSI_GUI_CH_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource("images.rcc");
    ui.windowLabel->setText("PSI Cuckoo Hashing");
    PSI_GUI_HideResultB();
    PSI_GUI_HideNetworkFeatures();
    PSI_GUI_HideWriteBufferSize();
    PSI_GUI_HidePathB();
    PSI_GUI_HideBucketN();
    PSI_GUI_HideElementSize();
    PSI_GUI_HidePathBuckets();
    PSI_GUI_HideQueueBufferSize();
    PSI_GUI_HideThreads();
}

PSI_GUI_CH_Window::~PSI_GUI_CH_Window() {
}

bool PSI_GUI_CH_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char path_a[128], size_table[128], path_result[128],
            recursive_limit[128], read_buffer_size[128], seed1[128], seed2[128],
            seed3[128], fixed_table_size[128];

    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);

    PSI_GUI_getCStr(ui.lineEditTableSizeMultiplier->text(), size_table);
    PSI_GUI_getCStr(ui.lineEditTableSize->text(), fixed_table_size);
    PSI_GUI_getCStr(ui.lineEditRecursiveDeepnessLimit->text(), recursive_limit);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result);

    snprintf(command, 511,
            "/usr/bin/psi-cuckoo-hashing -a \"%s\" -p \"%s\" -l %s -r %s ",
            path_a, path_result, recursive_limit, read_buffer_size);

    PSI_GUI_composeIfGreater0(fixed_table_size, " -f %s");
    PSI_GUI_composeIfGreater0(size_table, " -m %s");

    PSI_GUI_composeSeed(ui.lineEditHashSeed1, " -1 %s", seed1);
    PSI_GUI_composeSeed(ui.lineEditHashSeed2, " -2 %s", seed2);
    PSI_GUI_composeSeed(ui.lineEditHashSeed3, " -3 %s", seed3);
    return true;
}
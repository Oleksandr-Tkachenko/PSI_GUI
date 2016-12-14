/* 
 * File:   PSI_GUI_SH_Window.cpp
 * Author: alex
 * 
 * Created on August 27, 2016, 6:57 PM
 */

#include "PSI_GUI_SH_Window.h"

PSI_GUI_SH_Window::PSI_GUI_SH_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource(QDir::homePath().append(RESOURCES_DIR));
    ui.windowLabel->setText("PSI Simple Hashing");
    PSI_GUI_HideRecursiveDeepnessLimit();
    PSI_GUI_HideResultB();
    PSI_GUI_HideNetworkFeatures();
    PSI_GUI_HideWriteBufferSize();
    PSI_GUI_HidePathB();
    PSI_GUI_HideElementSize();
}

PSI_GUI_SH_Window::~PSI_GUI_SH_Window() {
}

bool PSI_GUI_SH_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char path_a[128], path_buckets[128], size_table[128], path_result[128],
            bucket_n[128], read_buffer_size[128], queue_buffer_size[128], seed1[128], seed2[128],
            seed3[128], fixed_table_size[128], threads[128];

    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPathBuckets->text(), path_buckets);

    PSI_GUI_getCStr(ui.lineEditTableSizeMultiplier->text(), size_table);
    PSI_GUI_getCStr(ui.lineEditTableSize->text(), fixed_table_size);
    PSI_GUI_getCStr(ui.lineEditReadBufferSize->text(), read_buffer_size);
    PSI_GUI_getCStr(ui.lineEditQueueBufferSize->text(), queue_buffer_size);
    PSI_GUI_getCStr(ui.lineEditPathResult->text(), path_result);
    PSI_GUI_getCStr(ui.lineEditNumberOfBuckets->text(), bucket_n);
    PSI_GUI_getCStr(ui.lineEditThreads->text(), threads);

    snprintf(command, 511,
            "/usr/bin/psi-simple-hashing -b %s -s \"%s\" -p \"%s\" -i %s -q %s -z \"%s\" -t %s",
            bucket_n, path_buckets, path_a, read_buffer_size, queue_buffer_size, path_result, threads);

    PSI_GUI_composeIfGreater0(fixed_table_size, " -f %s");
    PSI_GUI_composeIfGreater0(size_table, " -d %s");

    PSI_GUI_composeSeed(ui.lineEditHashSeed1, " -1 %s", seed1);
    PSI_GUI_composeSeed(ui.lineEditHashSeed2, " -2 %s", seed2);
    PSI_GUI_composeSeed(ui.lineEditHashSeed3, " -3 %s", seed3);
    
    if(ui.checkBoxReduction->isChecked())
        strcat(command, " -r 1");

    return true;
}
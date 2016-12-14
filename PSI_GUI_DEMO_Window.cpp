#include "PSI_GUI_DEMO_Window.h"

PSI_GUI_DEMO_Server_Window::PSI_GUI_DEMO_Server_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource(QDir::homePath().append(RESOURCES_DIR));
    ui.windowLabel->setText("PSI OT Demonstrator Server");
    ui.labelPathA->setText("Path to elements");

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
    PSI_GUI_HideResultA();
    PSI_GUI_HideReductionButton();
    PSI_GUI_HideHashTableFeatures();
    PSI_GUI_HideElementSize();
}

PSI_GUI_DEMO_Server_Window::~PSI_GUI_DEMO_Server_Window() {
}

bool PSI_GUI_DEMO_Server_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char path_a[128], port[128], ip[128];

    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);

    snprintf(command, 511,
            "exec bash -c '%s/.PSI_GUI/scripts/demonstrator_server.sh %s %s %s' ",
            QDir::homePath().toStdString().c_str(), path_a,
            ip, port);
    return true;
}

PSI_GUI_DEMO_Client_Window::PSI_GUI_DEMO_Client_Window(QWidget* parent, QWidget * main) : PSI_GUI_SubWindowTemplate(parent, main) {
    ui.setupUi(this);
    this->show();
    PSI_GUI_connectAllButtons();
    QResource::registerResource(QDir::homePath().append(RESOURCES_DIR));
    ui.windowLabel->setText("PSI OT Demonstrator Client");
    ui.labelPathA->setText("Path to elements");

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
    PSI_GUI_HideResultA();
    PSI_GUI_HideReductionButton();
    PSI_GUI_HideHashTableFeatures();
    PSI_GUI_HideElementSize();
}

PSI_GUI_DEMO_Client_Window::~PSI_GUI_DEMO_Client_Window() {
}

bool PSI_GUI_DEMO_Client_Window::PSI_GUI_selfCheck() {
    if (!PSI_GUI_checkOnlyDigits())
        return false;

    char path_a[128], port[128], ip[128];

    PSI_GUI_getCStr(ui.lineEditPathA->text(), path_a);
    PSI_GUI_getCStr(ui.lineEditPort->text(), port);
    PSI_GUI_getCStr(ui.lineEditIP->text(), ip);

    snprintf(command, 511,
            "exec bash -c '%s/.PSI_GUI/scripts/demonstrator_client.sh %s %s %s' ",
            QDir::homePath().toStdString().c_str(), path_a,
            ip, port);
    return true;
}
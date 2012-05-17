#include "scene_control_toolbar.h"
#include "mainwindow.h"

SceneControlToolbar::SceneControlToolbar(QWidget *parent):QToolBar(parent)
{
        pMW = dynamic_cast<MainWindow*>(parent);

       lt_global            = new QHBoxLayout(this);
       pb_camera_pos        = new QPushButton(QString::fromLocal8Bit("����������� ������"));
       pb_camera_rot        = new QPushButton(QString::fromLocal8Bit("��������� ������"));
       pb_camera_zoom       = new QPushButton(QString::fromLocal8Bit("�������"));

       lt_global->addWidget(pb_camera_pos);
       lt_global->addWidget(pb_camera_rot);
       lt_global->addWidget(pb_camera_zoom);
       lt_global->addStretch(5);

       this->setLayout(lt_global);

       createActions();
}

void SceneControlToolbar::createActions()
{
    cameraPosAction = new QAction(QString::fromLocal8Bit("&����������� ������"), this);
    connect(cameraPosAction, SIGNAL(triggered()),SLOT(setCameraTranslateAction()));

    cameraRotAction = new QAction(QString::fromLocal8Bit("&��������� ������"), this);
    connect(cameraRotAction, SIGNAL(triggered()), SLOT(setCameraRotAction()));

    cameraZoomAction = new QAction(QString::fromLocal8Bit("&�������"), this);
    connect(cameraZoomAction, SIGNAL(triggered()), SLOT(setCameraZoomAction()));

    this->addAction(cameraPosAction);
    this->addAction(cameraRotAction);
    this->addAction(cameraZoomAction);
}

void SceneControlToolbar::setCameraTranslateAction()
{
    changeEvent(MEV_CAMERA_TRANSLATE);
}

void SceneControlToolbar::setCameraRotAction()
{
    changeEvent(MEV_CAMERA_ROTATE);
}

void SceneControlToolbar::setCameraZoomAction()
{
    changeEvent(MEV_CAMERA_ZOOM);
}

void SceneControlToolbar::changeEvent(int i)
{
    pMW->setCurEvent(i);
}

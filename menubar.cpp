#include "menubar.h"
#include "mainwindow.h"

MenuBar::MenuBar(QWidget *parent) :
    QMenuBar(parent)
{
    pMW = dynamic_cast<MainWindow*>(parent);

    menu_file = new QMenu(QString::fromLocal8Bit("����"));
        this->addMenu(menu_file);
    menu_scene_action = new QMenu(QString::fromLocal8Bit("�����"));
        this->addMenu(menu_scene_action);
    menu_select_primitive = new QMenu(QString::fromLocal8Bit("���������"));
        this->addMenu(menu_select_primitive);
    menu_primitive_action = new QMenu(QString::fromLocal8Bit("�������� ��� �����������"));
        this->addMenu(menu_primitive_action);
    menu_help = new QMenu(QString::fromLocal8Bit("������"));
        this->addMenu(menu_help);

    createActions();
}

void MenuBar::createActions()
{
    action_open         = new QAction(QString::fromLocal8Bit("�������"),this);
    action_save         = new QAction(QString::fromLocal8Bit("���������"),this);
    action_save_to      = new QAction(QString::fromLocal8Bit("��������� ���..."),this);
    action_exit         = new QAction(QString::fromLocal8Bit("�����"),this);

    actionTranslateCamera   = new QAction(QString::fromLocal8Bit("����������� ������"),this);
    actionRotateCamera      = new QAction(QString::fromLocal8Bit("��������� ������"),this);
    actionZoomCamera        = new QAction(QString::fromLocal8Bit("�������� �������"),this);

    actionCube          = new QAction(QString::fromLocal8Bit("���"),this);
    actionSphere        = new QAction(QString::fromLocal8Bit("�����"),this);
    actionPyramid       = new QAction(QString::fromLocal8Bit("��������"),this);

    actionTranslate         = new QAction(QString::fromLocal8Bit("�����������"),this);
    actionRotate            = new QAction(QString::fromLocal8Bit("���������"),this);
    actionGroup             = new QAction(QString::fromLocal8Bit("������������"),this);

    action_about        = new QAction(QString::fromLocal8Bit("� ���������"),this);

    menu_file->addAction(action_open);
    menu_file->addSeparator();
    menu_file->addAction(action_save);
    menu_file->addAction(action_save_to);
    menu_file->addSeparator();
    menu_file->addAction(action_exit);
        connect(action_exit, SIGNAL(triggered()),pMW, SLOT(close()));
    menu_help->addAction(action_about);


    menu_scene_action->addAction(actionTranslateCamera);
        connect(actionTranslateCamera, SIGNAL(triggered()),pMW->getSceneControlToolbar(), SLOT(setCameraTranslateAction()));
    menu_scene_action->addAction(actionRotateCamera);
        connect(actionRotateCamera, SIGNAL(triggered()),pMW->getSceneControlToolbar(), SLOT(setCameraRotAction()));
    menu_scene_action->addAction(actionZoomCamera);
        connect(actionZoomCamera, SIGNAL(triggered()),pMW->getSceneControlToolbar(), SLOT(setCameraZoomAction()));


    menu_select_primitive->addAction(actionCube);
        connect(actionTranslateCamera, SIGNAL(triggered()),pMW->getSelectPrimitiveToolbar(), SLOT(setCubeAction()));
    menu_select_primitive->addAction(actionPyramid);
        connect(actionRotateCamera, SIGNAL(triggered()),pMW->getSelectPrimitiveToolbar(), SLOT(setPyramidAction()));
    menu_select_primitive->addAction(actionSphere);
        connect(actionZoomCamera, SIGNAL(triggered()),pMW->getSelectPrimitiveToolbar(), SLOT(setSphereAction()));


    menu_primitive_action->addAction(actionTranslate);
        connect(actionTranslate, SIGNAL(triggered()),pMW->getActionPrimitiveToolbar(), SLOT(setTranslateAction()));
    menu_primitive_action->addAction(actionRotate);
        connect(actionRotate, SIGNAL(triggered()),pMW->getActionPrimitiveToolbar(), SLOT(setRotateAction()));
    menu_primitive_action->addAction(actionGroup);
        connect(actionGroup, SIGNAL(triggered()),pMW->getActionPrimitiveToolbar(), SLOT(setGroupAction()));

}

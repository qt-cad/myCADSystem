#include "action_primitive_toolbar.h"
#include "mainwindow.h"

ActionPrimitiveToolBar::ActionPrimitiveToolBar(QWidget *parent) :  QToolBar(parent)
{
    pMW = dynamic_cast<MainWindow*>(parent);

    lt_global           = new QHBoxLayout(this);

    this->setLayout(lt_global);

    createActions();
}

void ActionPrimitiveToolBar::createActions()
{
    rotateAction            = new QAction(QString::fromLocal8Bit("&���������"), this);
    this->addAction(rotateAction);
    connect(rotateAction, SIGNAL(triggered()),SLOT(setRotateAction()));

    translateAction         = new QAction(QString::fromLocal8Bit("&�����������"), this);
    this->addAction(translateAction);
    connect(translateAction, SIGNAL(triggered()),SLOT(setTranslateAction()));

    scaleAction         = new QAction(QString::fromLocal8Bit("&��������������"), this);
    this->addAction(scaleAction);
    connect(scaleAction, SIGNAL(triggered()),SLOT(setScaleAction()));


    subtractionAction       = new QAction(QString::fromLocal8Bit("&�������"), this);
    this->addAction(subtractionAction);
    connect(subtractionAction, SIGNAL(triggered()),SLOT(setSubstractAction()));

    groupAction             = new QAction(QString::fromLocal8Bit("&������������"), this);
    this->addAction(groupAction);
    connect(groupAction, SIGNAL(triggered()),SLOT(setGroupAction()));

    intersectionAction      = new QAction(QString::fromLocal8Bit("&�����������"), this);
    this->addAction(intersectionAction);
    connect(intersectionAction, SIGNAL(triggered()),SLOT(setIntersectAction()));
}

void ActionPrimitiveToolBar::setTranslateAction()
{
    changeEvent(MEV_TRANSLATE);
}

void ActionPrimitiveToolBar::setRotateAction()
{
    changeEvent(MEV_ROTATE);
}

void ActionPrimitiveToolBar::setScaleAction()
{
    changeEvent(MEV_SCALE);
}

void ActionPrimitiveToolBar::setGroupAction()
{
    changeEvent(MEV_GROUP);
}

void ActionPrimitiveToolBar::setSubstractAction()
{
    changeEvent(MEV_SUBSTRACT);
}

void ActionPrimitiveToolBar::setIntersectAction()
{
    changeEvent(MEV_INTERSECT);
}

void ActionPrimitiveToolBar::changeEvent(int i)
{
    pMW->setCurEvent(i);
}


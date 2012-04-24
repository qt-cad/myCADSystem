#include "menubar.h"

MenuBar::MenuBar(QWidget *parent) :
    QMenuBar(parent)
{
    menu_file = new QMenu(QString::fromLocal8Bit("����"));
    this->addMenu(menu_file);
        menu_open = new QMenu(QString::fromLocal8Bit("�������"));
        menu_file->addMenu(menu_open);
        menu_exit = new QMenu(QString::fromLocal8Bit("�����"));
        menu_file->addMenu(menu_exit);
    menu_scene_action = new QMenu(QString::fromLocal8Bit("�����"));
    this->addMenu(menu_scene_action);
    menu_select_primitive = new QMenu(QString::fromLocal8Bit("���������"));
    this->addMenu(menu_select_primitive);
    menu_primitive_action = new QMenu(QString::fromLocal8Bit("�������� ��� �����������"));
    this->addMenu(menu_primitive_action);
    menu_help = new QMenu(QString::fromLocal8Bit("������"));
    this->addMenu(menu_help);
        menu_about = new QMenu(QString::fromLocal8Bit("� ���������"));
        menu_help->addMenu(menu_about);

    this->addMenu(menu_help);
}

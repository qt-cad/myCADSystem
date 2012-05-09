// ������� ���� ���������

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "paintingzone.h"
#include "menubar.h"
#include "toolbars/action_primitive_toolbar.h"
#include "toolbars/select_primitive_toolbar.h"
#include "toolbars/scene_control_toolbar.h"
#include "toolbars/list_primitive_toolbar.h"
#include "statusbar.h"
#include "work.h"
#include "resource.h"

class MainWindow : public QMainWindow
{
public:
    explicit MainWindow(QWidget *parent = 0);                   // �����������
    int* getCurEvent();
    void setCurEvent(int event);
    int *getPrevEvent();
    void setPrevEvent(int event);
    Work* getWork();
    void Update();
    PaintingZone *getPaintingZone();
    ListPrimitiveToolbar *getListPrimitiveTollBar();
    StatusBar* getStatusBar();
private:
    PaintingZone                    *paintingZone;              // ������ �������� ����
    MenuBar                         *menuBar;
    ActionPrimitiveToolBar          *actionPrimitiveToolbar;    // ������ ���������� �����������
    SelectPrimitiveToolbar          *selectPrimitiveToolbar;    // ������ ������ ����������
    ListPrimitiveToolbar            *listPrimitiveToolBar;      //  ������ ���������� �����
    SceneControlPanel               *sceneControlPanel;         // ������ ���������� ������
    StatusBar                       *statusBar;                 // ������ ������ ���. ����������
    int                             cur_event;                  // ������� �������
    int                             prev_event;                 // ���������� �������
    Work                            *currentWork;               // ������� ������
public slots:
    void showAbout();

};

#endif // MAINWINDOW_H

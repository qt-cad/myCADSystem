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
#include <QFileDialog>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(int max_width, int max_height, QWidget *parent = 0);                   // �����������
    int* getCurEvent();
    void setCurEvent(int event);
    int *getPrevEvent();
    void setPrevEvent(int event);
    Work* getWork();
    void Update();
    PaintingZone *getPaintingZone();
    SelectPrimitiveToolbar *getSelectPrimitiveToolbar();
    ActionPrimitiveToolBar* getActionPrimitiveToolbar();
    SceneControlToolbar* getSceneControlToolbar();

    StatusBar* getStatusBar();

private:
    PaintingZone                    *paintingZone;              // ������ �������� ����
    MenuBar                         *menuBar;
    ActionPrimitiveToolBar          *actionPrimitiveToolbar;    // ������ ���������� �����������
    SelectPrimitiveToolbar          *selectPrimitiveToolbar;    // ������ ������ ����������
    ListPrimitiveToolbar            *listPrimitiveToolBar;      // ������ ���������� �����
    SceneControlToolbar               *sceneControlPanel;         // ������ ���������� ������
    StatusBar                       *statusBar;                 // ������ ������ ���. ����������
    int                             cur_event;                  // ������� �������
    int                             prev_event;                 // ���������� �������
    Work                            *currentWork;               // ������� ������
    bool                             WORK_CREATED;
public:
    long selected_prim;
    QString savedPath;

public slots:
    void showAbout();
    void saveTo();
    void save();
    void open();

};

QDataStream& operator<<(QDataStream &out, const QList<Container*> *);

#endif // MAINWINDOW_H
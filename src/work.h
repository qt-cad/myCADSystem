// ������ (������)
#ifndef WORK_H
#define WORK_H

#include <QGLWidget>
#include <GL/glu.h>
#include "stdlib.h"
#include "time.h"
#include "resource.h"
#include "lib/lib.h"

class MainWindow;

class Work
{
public:
    explicit Work(QWidget *parent);
    void drawWork(bool mode=true);
    void addPrimitive(int i, QPoint pos=QPoint(0,0));                           // ���������� ������� �� �����
    void addAction(int i);                              // ���������� ��������
    long generateGID();                                 // ��������� �������������� ��� �������
    MCOLOR *generateIDColor();
    MCOLOR *generateColor();
    QList<Container *> *getList();
    void deletePrimitive(long index);
    void setGroupObj1(long i);
    void setGroupObj2(long i);
    long getGroupObj1();
    long getGroupObj2();
public:
    int                      real_color[3];
private:
    long                      forGroupID[2];
    MainWindow  *pMW;
    QList<Container*>          *element_list;             //  ������ ��������� �����
    long                        current_free_id;           //  ������� ��������� �������������
    int                         current_free_color[3];     //
    GLUquadric                  *quadric;
};


#endif // WORK_H

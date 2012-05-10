// ������ (������)
#ifndef WORK_H
#define WORK_H

#include <QGLWidget>
#include <GL/glu.h>
#include "stdlib.h"
#include "time.h"
#include "lib/lib.h"
#include "resource.h"

class MainWindow;

class Work
{
public:
    explicit Work(QWidget *parent);
    void drawWork(bool mode=true);
    void addPrimitive(int i);                           // ���������� ������� �� �����
    void addAction(int i, double obj[3]);               // ���������� ��������
    long generateGID();                                 // ��������� �������������� ��� �������
    void generatetIDColor(int arr[]);
    void generateColor(int arr[]);
    QList<Element*>* getList();
    QList<int>* getOnlyPrimitiveList();
    void deletePrimitive(long index);
    void generateOnlyPrimitiveList();
public:
    int                      real_color[3];
    long                      toGroupIDs[2];
    void setGroupObj1(long i);
    void setGroupObj2(long i);
    long getGroupObj1();
    long getGroupObj2();
private:
    MainWindow  *pMW;
    QList<Element*>          *element_list;             //  ������ ��������� �����
    long                     current_free_id;           //  ������� ��������� �������������
    int                      current_free_color[3];     //
    QList<int>               *only_prymitive;           //  ������� ������ ����������
    GLUquadric               *quadric;
};


#endif // WORK_H

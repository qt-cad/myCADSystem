// ������ (������)
#ifndef WORK_H
#define WORK_H

#include <QGLWidget>
#include <GL/glu.h>
#include "stdlib.h"
#include "time.h"
#include "lib/lib.h"
#include "resource.h"

class Work
{
public:
    explicit Work();
    void drawWork(bool mode=true);
    void addPrimitive(int i);               // ���������� ������� �� �����
    void addAction(int i, double obj[3]);   // ���������� ��������
    long generateGID();                          // ��������� �������������� ��� �������
    void generatetIDColor(int arr[]);
    void generateColor(int arr[]);
    QList<Element*>* getList();
    QList<int>* getOnlyPrimitiveList();
public:
    int                      real_color[3];
private:
    QList<Element*>          *element_list;             //  ������ ��������� �����
    long                     current_free_id;           //  ������� ��������� �������������
    int                      current_free_color[3];     //
    QList<int>               *only_prymitive;           //  ������� ������ ����������
    GLUquadric               *quadric;
};


#endif // WORK_H

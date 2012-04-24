// ������ (������)
#ifndef WORK_H
#define WORK_H

#include <QGLWidget>
#include <GL/glu.h>
#include "lib/lib_primitive/cube.h"
#include "lib/lib_primitive/pyramid.h"
#include "lib/lib_action/translate.h"
#include "lib/lib_action/rotate.h"
#include "lib/element.h"
#include "resource.h"

class Work
{
public:
    explicit Work();
    void drawWork();
    void addPrimitive(int i);               // ���������� ������� �� �����
    void addAction(int i, double obj[3]);   // ���������� ��������
    long genGID();                          // ��������� �������������� ��� �������
    int* genIDColor();
    QList<Element*>* getList();
    QList<int>* getOnlyPrimitiveList();

private:
    QList<Element*>          *element_list;             //  ������ ��������� �����
    long                     current_free_id;           //  ������� ��������� �������������
    int                      current_free_color[3];     //
    QList<int>               *only_prymitive;           //  ������� ������ ����������
};


#endif // WORK_H

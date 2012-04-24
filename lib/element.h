#ifndef ELEMENT_H
#define ELEMENT_H

#include "QGLWidget"
#include <QString>
#include "resource.h"

class Element
{
public:
    Element();
    void setGID(long n);         //  ���������� GID
    long getGID();               //  �������� GID
    void setTypeName(int a);    //  ���������� ���� ���������
    virtual void Apply() = 0;    //  ��������� ��������
    int getTypeName();

private:
    long            GID;         //  ���������� ������������� ��������
    int             type_name;
};

#endif // ELEMENT_H

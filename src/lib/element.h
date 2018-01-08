#ifndef ELEMENT_H
#define ELEMENT_H

#include "QOpenGLWidget"
#include <QString>

class Element
{
public:
    Element();
    void setGID(long n);         //  ���������� GID
    long getGID();               //  �������� GID
    void setTypeName(int a);    //  ���������� ���� ���������
    int getTypeName();
    virtual void Apply(int mode) = 0;    //  ��������� ��������

private:
    long            GID;         //  ���������� ������������� ��������
    int             type_name;

};

#endif // ELEMENT_H

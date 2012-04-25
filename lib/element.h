#ifndef ELEMENT_H
#define ELEMENT_H

#include "QGLWidget"
#include <QString>

class Element
{
public:
    Element();
    void setGID(long n);         //  ���������� GID
    long getGID();               //  �������� GID
    void setTypeName(int a);    //  ���������� ���� ���������
    int getTypeName();
    virtual void Apply(bool mode=true) = 0;    //  ��������� ��������

private:
    long            GID;         //  ���������� ������������� ��������
    int             type_name;

};

#endif // ELEMENT_H

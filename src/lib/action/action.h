// ������� ����� ��������
#ifndef ACTION_H
#define ACTION_H

#include <QGLWidget>
#include "lib/element.h"
#include "resource.h"

class Action : public Element
{
public:
    explicit Action(bool mode=true);
};

#endif // ACTION_H

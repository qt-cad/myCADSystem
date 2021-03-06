#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include <QOpenGLWidget>
#include "src/lib/Element.h"

class Primitive : public Element
{
public:
    Primitive();
    void draw();
    int* getColor();
    void setColor(int *a);

private:
    int *ID_COLOR;
};


#endif // PRIMITIVE_H

#ifndef CUBE_H
#define CUBE_H

#include "src/lib/primitive/Primitive.h"

class Cube : public Primitive
{
public:
    explicit Cube(GLfloat a);
    virtual void draw();
public:
    GLdouble a;
};



#endif // CUBE_H

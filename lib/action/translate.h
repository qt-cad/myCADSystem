//   �������� "��������"

#ifndef TRANSLATE_H
#define TRANSLATE_H

#include "lib/action/action.h"

class Translate : public Action
{
public:
    explicit Translate(double x=0, double y=0, double z=0);
    virtual void Apply(bool mode=true);
    void move(double x, double y, double z);
    void moveTo(double x, double y, double z);

private:
    double x, y, z;
};

#endif // TRANSLATE_H
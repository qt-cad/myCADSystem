//  �������� "���������"

#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "lib/action/action.h"

class Subtraction : public Action
{
public:
    explicit Subtraction();
    virtual void Apply(bool mode=true);
};

#endif // SUBTRACTION_H
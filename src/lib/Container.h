//  Контейнер хранящий прмитив и все связные с ним операции

#ifndef CONTAINER_H
#define CONTAINER_H

#include <QList>
#include "src/lib/primitive/Primitive.h"
#include "src/lib/action/Translate.h"
#include "src/lib/action/Rotate.h"
#include "src/lib/action/Scale.h"

class Container
{
public:
    Container(Primitive *prim);
    Container(Primitive *prim, Translate *translate);
    void addTranslate(Translate *trans);
    void addRotate(Rotate *rot);
    void addScale(Scale *scale);
    void draw(int mode);
    QList<Translate*>* getTranslateList();
    QList<Rotate*>* getRotateList();
    QList<Scale*>* getScaleList();
    Translate* getTranslate();
    Scale* getScale();
    Rotate* getRotate();
    Primitive* getPrimitive();

private:
    Primitive *primitive;
    QList<Translate*>* translateList;
    QList<Rotate*>* rotateList;
    QList<Scale*>* scaleList;
};

QDataStream& operator<<(QDataStream &out, const Container *painting);

#endif // CONTAINER_H

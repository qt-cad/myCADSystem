// ������ �������� ����

#ifndef PAINTINGZONE_H
#define PAINTINGZONE_H

#include <QSplitter>
#include "glwidget.h"
#include "resource.h"

class PaintingZone : public QWidget
{
public:
    explicit PaintingZone(QWidget *parent = 0);
    void Update();

public:
    QSplitter           *sp_global;
    QSplitter           *sp_top;
    QSplitter           *sp_down;
    GLWidget            *widPerspective;           // ������������� ��������
    GLWidget            *widTop;                   // YOX
    GLWidget            *widFront;                 // ZOX
    GLWidget            *widRight;                 // XOY
    QVBoxLayout         *lay_global;               // ���������� �������� ����������
};

#endif // PAINTINGZONE_H

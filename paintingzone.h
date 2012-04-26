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
    void setAllUnvisible(bool a);
public:
    QSplitter           *sp_global;
    QSplitter           *sp_top;
    QSplitter           *sp_down;
    GLWidget            *widPerspective;           // ������������� ��������
    GLWidget            *widTop;                   // YOX
    GLWidget            *widFront;                 // ZOX
    GLWidget            *widRight;                 // XOY
    QVBoxLayout         *lay_global;               // ���������� �������� ����������
    void saveAllWH();
public slots:
    void setMaximum(int i);
};

#endif // PAINTINGZONE_H

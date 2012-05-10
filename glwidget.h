// ������� ���������

#ifndef GLWIDGET_H
#define GLWIDGET_H


#include <QtGui>
#include <QGLWidget>
#include <QPoint>
#include <QVBoxLayout>
#include <QComboBox>
#include <QMouseEvent>
#include <math.h>
#include "GL/glu.h"
#include "resource.h"
#include "work.h"
#include "toolbars/list_primitive_toolbar.h"
#include "lib/lib.h"
#include "contextmenu.h"

class MainWindow;

class GLWidget : public QGLWidget
{
    Q_OBJECT
protected:
    void initializeGL();                                                //  ������������� GL
    void resizeGL(int _w, int _h);                                      //  ��������� ������� ������� ���������
    void paintGL();                                                     //  ������� ������� ���������

public:
    explicit GLWidget(QWidget *parent = 0);                             //  �����������
    void mousePressEvent(QMouseEvent *event);                           //  ��������� ������� ������ ����
    void mouseMoveEvent(QMouseEvent *event);                            //  ��������� �������� ����
    int getProjection();                                                //  �������� ��� �������� ����
    void setProjection(int i);                                          //  ���������� ��� �������� ����
    void selectEvent(QMouseEvent *event, QPoint current);               //  ����� �������
    void eventTranslateCamera(QMouseEvent *event, QPoint current);      //  ����������� ������
    void eventRotateCamera(QMouseEvent *event, QPoint current);         //  ������� ������
    void eventZoomCamera(QMouseEvent *event, QPoint current);           //  ��������������� ������
    void eventTranslatePrimitive(QMouseEvent *event);                   //  ����������� ���������
    void eventRotatePrimitive(QMouseEvent *event, QPoint current);      //  ������� ���������
    void addPrimitive();                                                //  ���������� ��������� � ������� �� ���������
    void addPrimitive(QPoint current);                                  //  ���������� ��������� �� ����� � ��������� �������
    double ScreenToOGL(int coord, int type);                            //  ������� ������� ��������� � ���������� OpenGL
    void drawAxes();                                                    //  ��������� ����
    void drawPlane();                                                   //  ��������� ���������

    void initializeLighting();
    void SaveLastState();
    void LoadLastState();
    double ScreenToOGLv2(int last, int coord, int type);                //
    void setXRotation(int angle);                                       //
    void setYRotation(int angle);                                       //
    void setZRotation(int angle);                                       //
    void drawX();
    void drawY();
    void drawZ();
    void qNormalizeAngle(int &angle);
    long getSelectedPrimitiveID(QMouseEvent *event);

//---------------------------����������---------------------------

public:
    MainWindow      *pMW;                                               //  ��������� �� ������ ������ �������� ������
    int             PAINTING_MODE;                                      //  ����� ���������
    int             PROJECTION_TYPE;                                    //  ��� �������� ����
    Work            *currentWork;                                       //  ������� ������
    int             *currenEvent;                                       //  ������� �������
    int             *previousEvent;                                     //  ���������� �������
    bool            SELECTED,                                           //  ������ ������ �����
                    AXES,                                               //  �������� ���
                    PLANE;                                              //  �������� �����
    GLubyte         pixel[3];                                           //  ���� ������� ���������� �����

    ///////////////���������/////////////////
    struct Ortho{
        Ortho():
                width(0), height(0), last_width(0), last_height(0),
            left_val(0), right_val(0), top_val(0), down_val(0),
            near_val(0), far_val(0)
        {
        }

        double width;
        double height;
        double last_width;
        double last_height;
        double left_val;
        double right_val;
        double top_val;
        double down_val;
        double near_val;
        double far_val;
    };

    Ortho           currentOrtho;
    double koef;
    ContextMenu     *contextMenuPrimitive;
    int             lastProjection;
    GLdouble        xRot,                   //
                    yRot,                   //
                    zRot;                   //
    GLfloat         xTranslate,             //
                    yTranslate,             //
                    zTranslate;             //
    GLdouble        gScale;                 // ������� ���� �����
    QPoint          p_lastPos;              //
    QPoint          p_currentPos;           //
    QVBoxLayout     *lay_global_v;          //
    QHBoxLayout     *lay_global_h;          //
    QComboBox       *comboBox;              //
    GLfloat         _x,
                    _y,
                    _z;
    double          n;
    double          R;
    static const GLfloat step_scale = 0.01f;
    static const GLfloat step_translate = 0.05f;
    GLdouble step_rotate;
//////////////////////////////////////
    GLint Mx, My;           // ������� ������� (������������)
    GLint prevMx, prevMy;   // ���������� ������� �������?

    double calcKoef();
    void eventGroupPrimitive(long ob1, long obj2);
    bool intersectionGroupObj(long ob1, long obj2);
    void addAction(int i);
    void addPrimitive(int i);
public slots:
    void changeProection(int n);
    void deletePrimitive();
};

#endif // GLWIDGET_H

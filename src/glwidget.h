// ������� ���������

#ifndef GLWIDGET_H
#define GLWIDGET_H


#include <QtGui>
#include <QOpenGLWidget>
#include <QPoint>
#include <QVBoxLayout>
#include <QComboBox>
#include <QMouseEvent>
#include <math.h>
#include "GL/glu.h"
#include "src/resource.h"
#include "work.h"
#include "toolbars/list_primitive_toolbar.h"
#include "src/lib/lib.h"
#include "contextmenu.h"

#include "invers.h"
#include "matrix.h"


class MainWindow;

class GLWidget : public QOpenGLWidget
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
    void eventGroupPrimitive(long ob1, long obj2);
    void eventSubstractPrimitive(long obj1, long obj2);
    void eventIntersectPrimitive(long obj1, long obj2);
    void eventScalePrimitive(QPoint point);
    void eventStretchPrimitive(QPoint poin);
    void addPrimitive(QPoint pos=QPoint(0,0));                                      //  ���������� ���������
    void addAction(int i);
    void addPrimitive(int i);
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
    double calcKoef();
    bool intersectionGroupObj(long obj1, long obj2);
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
    QPoint          lastPos;              //
    QPoint          currentPos;           //
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
    static const GLdouble step_rotate = 1;

//////////////////////////////////////
    GLint Mx, My;           // ������� ������� (������������)
    GLint prevMx, prevMy;   // ���������� ������� �������?
    GLdouble startMatrix[4][4];
    GLdouble inversStartMatrix[4][4];

    QString getTextEvent(int event);
public slots:
    void changeProection(int n);
    void deletePrimitive();
};

#endif // GLWIDGET_H

#ifndef RESOURCE_H
#define RESOURCE_H

#define PLANE_MIN_X                -5.0    // ������� ��������� (����� �������� �����, ������ ������)(XOZ)
#define PLANE_MAX_X                 5.0
#define PLANE_MIN_Z                -5.0
#define PLANE_MAX_Z                 5.0

// ������ ���������
#define MODE_REAL                   true
#define MODE_FICTIVE                false


// ���
#define MPJ_PERSPECTIVE             0
#define MPJ_TOP                     1
#define MPJ_RIGHT                   2
#define MPJ_FRONT                   3
#define MPJ_MAXIMAZE                4
#define MPJ_RESET                   5

// ������
#define COORD_X                     10
#define COORD_Y                     11

//��� ��������
//���������
#define MEL_PRIMITIVE               100
#define MEL_CUBE                    103
#define MEL_PYRAMID                 104
#define MEL_CYLINDER                105
#define MEL_SPHERE                  106
#define MEL_GROUP                   107
#define MEL_SUBSTRACT               108
#define MEL_INTERSECT               109

//�������� ��� �����������
#define MEV_ACTION                  200
#define MEV_TRANSLATE               201 // �����������
#define MEV_SCALE                   202 // ��������������
#define MEV_STRETCH                 203 // ���������
#define MEV_ROTATE                  204 // �������
#define MEV_GROUP                   205 // ������������
#define MEV_SUBSTRACT               206 //
#define MEV_INTERSECT               207 //

//�������� ��� ������
#define MEV_CAMERA_TRANSLATE        251 // ����������� ������
#define MEV_CAMERA_ROTATE           252 // ������� ������
#define MEV_CAMERA_ZOOM             253 // �������� �������

//������
#define MCM_SCENE                   300
#define MCM_PRIMITIVE               301

#endif // RESOURCE_H

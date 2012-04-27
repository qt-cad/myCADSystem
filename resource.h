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
#define MEL_POINT                   101
#define MEL_LINE                    102
#define MEL_CUBE                    103
#define MEL_PYRAMID                 104
#define MEL_CYLINDER                105
//��������
#define MEL_ACTION                  151
#define MEL_TRANSLATE               152

//�������� ��� �����������
#define MEV_TRANSLATE               200 // �����������
#define MEV_ROTATE                  201 // �������
#define MEV_GROUP                   202 // ������������
#define MEV_SUBSTRACT               203 //
#define MEV_INTERSECT               204 //

//�������� ��� ������
#define MEV_CAMERA_TRANSLATE        251 // ����������� ������
#define MEV_CAMERA_ROTATE           252 // ������� ������
#define MEV_CAMERA_ZOOM             253 // �������� �������

//��� ���������
#define MEV_PRIM_POINT              301 // �����
#define MEV_PRIM_LINE               302 // �����
#define MEV_PRIM_QUAD               303 // ���
#define MEV_PRIM_PYRAMID            304 // ��������
#define MEV_PRIM_SPHERE             305 // �����
#define MEV_PRIM_CYLINDER           306 // �������



#endif // RESOURCE_H

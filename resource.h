#pragma once

#ifndef RESOURCE_H
#define RESOURCE_H

#define PLANE_MIN_X                -5.0    // ������� ��������� (����� �������� �����, ������ ������)(XOZ)
#define PLANE_MAX_X                 5.0
#define PLANE_MIN_Z                -5.0
#define PLANE_MAX_Z                 5.0

// ���
#define MPJ_PERSPECTIVE                0
#define MPJ_TOP                        1
#define MPJ_RIGHT                      2
#define MPJ_FRONT                      3
//#define WMAXIMAZE                      4
//#define WRESET                         5

//��� ��������
//���������
#define MEL_POINT                   100
#define MEL_LINE                    101
#define MEL_CUBE                    102
#define MEL_PYRAMID                 103
#define MEL_CYLINDER                104
//��������
#define MEL_TRANSLATE               105

//�������� ��� �����������
#define MEV_TRANSLATE           200 // �����������
#define MEV_ROTATE              201 // �������
#define MEV_GROUP               202 // ������������
#define MEV_SUBSTRACT           203 //
#define MEV_INTERSECT             204 //

//�������� ��� ������
#define MEV_CAMERA_TRANSLATE        301 // ����������� ������
#define MEV_CAMERA_ROTATE           302 // ������� ������
#define MEV_CAMERA_ZOOM             303 // �������� �������

//��� ���������
#define MEV_PRIM_POINT              401 // �����
#define MEV_PRIM_LINE               402 // �����
#define MEV_PRIM_QUAD               403 // ���
#define MEV_PRIM_PYRAMID            404 // ��������
#define MEV_PRIM_SPHERE             405 // �����
#define MEV_PRIM_CYLINDER           406 // �������

#endif // RESOURCE_H

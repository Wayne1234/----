// Ray.h: interface for the Ray class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RAY_H__1E702CD5_E748_4FBF_972F_F6856A823522__INCLUDED_)
#define AFX_RAY_H__1E702CD5_E748_4FBF_972F_F6856A823522__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "point.h"
class Ray //�����࣬�����˥������û��ʹ��
{
public:
	Ray();
	Ray(const Point& begin, const Vector3& dir);
	float attenuate(const Point& object);	//���ߵ�˥��
	float Ray::attenuate(float length);
public:
	Point beginPoint;	//���ߵ����
	Vector3 direction;	//���ߵķ���
	Vector3 color;	//���ߵ���ɫ
	Vector3 attenuation;	//˥������
};

#endif // !defined(AFX_RAY_H__1E702CD5_E748_4FBF_972F_F6856A823522__INCLUDED_)
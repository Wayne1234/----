// Light.h: interface for the Light class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIGHT_H__CCD0A844_279D_4B73_910D_008056236329__INCLUDED_)
#define AFX_LIGHT_H__CCD0A844_279D_4B73_910D_008056236329__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "point.h"

class Light  //���Դ
{
public:
	static Vector3 Ia;	//������ǿ��
	Point pos;	//��Դλ��
	Vector3 Ip;	//��Դǿ��
public:
	//Light(const Point& light_pos,
};

#endif // !defined(AFX_LIGHT_H__CCD0A844_279D_4B73_910D_008056236329__INCLUDED_)
// Polygon.h: interface for the Polygon class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_POLYGON_H__9C8C4F78_4215_4D82_9068_872B64550991__INCLUDED_)
#define AFX_POLYGON_H__9C8C4F78_4215_4D82_9068_872B64550991__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <vector>
#include "light.h"
using namespace std;

class Polygon
{
public:
	Polygon(const vector<Point>& nvertex);
	Polygon();
	Polygon(const Polygon& polygon);
	Vector3 Ks;	//�������
	Vector3 Kt;	//͸�����
	Vector3 Cs;	//������ɫ����
	Vector3 Ct;	//͸����ɫ����
	Vector3 Kd;	//���������
	Vector3 Ka;	//���������
	Point normal;	//����εķ������� 
	float d;	//����ξ�ԭ��ľ���
	float na, nb;//na��Ϊ���棬nb��Ϊ����
	bool isTransparente;
	vector<Point> vertex;
public:
	bool isPointInPolygon(const Point& pt);	// �жϵ��ǲ����ڶ������
	bool isNormalSide(const Point& pt);	//�жϵ��ǲ���λ�ڶ���ε�����(�����Ƕ���η����������ڵ���)
	void setVertexes(const vector<Point>& nvertex);	//���ö���εĶ���
	void addVertex(const Point& pt);	//���Ӷ���
	void setVertexes(const Point vpt[], int index[], int n);	//���ö���εĶ���
	void refresh();	//ˢ�¼������εķ������������ξ�ԭ��ľ���
};

#endif // !defined(AFX_POLYGON_H__9C8C4F78_4215_4D82_9068_872B64550991__INCLUDED_)

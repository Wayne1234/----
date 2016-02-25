// Scene.h: interface for the Scene class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCENE_H__1BB16233_561A_4D63_BA15_8FE397FA36DF__INCLUDED_)
#define AFX_SCENE_H__1BB16233_561A_4D63_BA15_8FE397FA36DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <vector>
#include <gl/glut.h>
#include "polygon.h"
#include "ray.h"
//#define TRACE_DEPTH 1
using namespace std;

class Scene
{
public:
	Scene();
	void initScene();	//�����ĳ�ʼ����
	void displayScene();	//���յ���ʾ����,opengl���øú�������
	Vector3 localLightting(const Polygon& polygon, const Point& current_pos, const Point& out);//�ֲ�����ģ��
	Point crossRayPlane(const Ray& ray, const Polygon& plane);	//����ƽ����������ߵĽ���
	int findNearestPolygon(const Ray& ray);	//�ҵ����Դ����Ķ����
	void writeFrameBuffer();	//�ѳ����е������ù��߸��ٷ�д�뵽buffer��ȥ
	Vector3 RayTracing(const Ray& ray, int depth);
	void setViewport(int w, int h);
public:
	vector<Polygon> plane;
	vector<Light> light;
	Point eye;
	Point lb;	//���½�
	Point rt;	//���Ͻ�
	int width;
	int height;
	vector<Vector3> buffer;	//RGB��ɫ��buffer
	bool isSceneChanged;
};

#endif // !defined(AFX_SCENE_H__1BB16233_561A_4D63_BA15_8FE397FA36DF__INCLUDED_)
#pragma once
#include"Point.h"
class cricle
{
public:
	void setR(int r);
	int getR();
	void setCenter(Point point);
	Point getCenter();
private:
	int m_R;
	Point m_Point;
};


#include "Point.h"
#include<iostream>
using namespace std;

int Point::getX() {
	return Point::m_X;
}

int Point::getY() {
	return Point::m_Y;
}

void Point::setX(int x) {
	Point::m_X = x;
}

void Point::setY(int y) {
	Point::m_Y = y;
}



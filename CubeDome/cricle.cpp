#include "cricle.h"
#include"Point.h"
#include<iostream>
using namespace std;

Point cricle::getCenter() {
	return cricle::m_Point;
}

void cricle::setCenter(Point point) {
	cricle::m_Point = point;
}

int cricle::getR() {
	return cricle::m_R;
}

void cricle::setR(int r) {
	cricle::m_R = r;
}

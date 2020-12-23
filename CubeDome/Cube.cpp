#include<iostream>
#include<math.h>
#include"cricle.h"
#include"Point.h"
using namespace std;



class Cube {
public:
	void setL(int l) {
		m_L = l;
	}

	int getL() {
		return m_L;
	}

	void setW(int w) {
		m_W = w;
	}

	int getW() {
		return m_W;
	}

	void setH(int h) {
		m_H = h;
	}

	int getH() {
		return m_H;
	}

	int calculateS() {
		return 2 * (m_L * m_H + m_L * m_W + m_W * m_H);
	}

	int calculateV() {
		return m_L * m_H * m_W;
	}

	bool isSameCube(Cube& c) {
		if (c.getH() != m_H) {
			return false;
		}
		if (c.getW() != m_W) {
			return false;
		}
		if (c.getL() != m_L) {
			return false;
		}
		return true;
	}
private:
	int m_L;
	int m_W;
	int m_H;
};

bool isSame(Cube& c1, Cube& c2);

void isInCricle(cricle& c, Point& p) {
	int distence = (c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) 
		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int distenceR = c.getR() * c.getR();
	cout << distence << endl;
	cout << distenceR << endl;
	if (distence == distenceR) {
		cout << "点在圆上" << endl;
	}
	else if (distence > distenceR) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
}

int main() {
	/*Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);

	cout << c1.calculateS() << endl;
	cout << c1.calculateV() << endl;

	if (isSame(c1, c2)) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}

	c1.isSameCube(c2) ? cout << "相等" << endl : cout << "不相等" << endl;*/
	cricle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	Point p1;
	p1.setX(10);
	p1.setY(11);

	Point p2;
	p2.setX(10);
	p2.setY(9);

	isInCricle(c, p);
	isInCricle(c, p1);
	isInCricle(c, p2);
}

bool isSame(Cube& c1, Cube& c2) {
	if (c1.getH() != c2.getH()) {
		return false;
	}
	if (c1.getL() != c2.getL()) {
		return false;
	}
	if (c1.getW() != c2.getW()) {
		return false;
	}
	return true;
}
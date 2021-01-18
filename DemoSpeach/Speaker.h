#pragma once
#include<iostream>
#include<string>
using namespace std;

class Speaker
{
private:
	string m_Name;

public:
	// 默认为两轮得分
	double m_Score[2];
	void setName(string name);
	string getName();
};


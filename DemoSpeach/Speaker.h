#pragma once
#include<iostream>
#include<string>
using namespace std;

class Speaker
{
private:
	string m_Name;

public:
	// Ĭ��Ϊ���ֵ÷�
	double m_Score[2];
	void setName(string name);
	string getName();
};


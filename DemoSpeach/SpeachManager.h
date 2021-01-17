#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"Speaker.h"
using namespace std;

// ������
// ���潻�����ļ��洢����
class SpeachManager
{
public:
	// ��ʼѡ��
	vector<int> v1;
	// ��һ�ֱ�������ѡ��
	vector<int> v2;
	// ʤ��ѡ��
	vector<int> victory;
	// �����ѡ��
	map<int, Speaker> m_Speaker;
	// ��������
	int m_index;
	SpeachManager();
	~SpeachManager();
	// ��ʾ�˵�
	void showMenu();
	// �˳�
	void exitSystem();
	// ��ʼ��������
	void initSpeachManager();
	// ��������ѡ��
	void creatSpeaker();
	// ��ʼ����
	void startSpeach();
	// ��ǩ
	void speechDraw();
};


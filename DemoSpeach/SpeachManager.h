#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"Speaker.h"
using namespace std;

// 管理类
// 界面交互与文件存储交互
class SpeachManager
{
public:
	// 初始选手
	vector<int> v1;
	// 第一轮比赛晋级选手
	vector<int> v2;
	// 胜出选手
	vector<int> victory;
	// 编号与选手
	map<int, Speaker> m_Speaker;
	// 比赛轮数
	int m_index;
	SpeachManager();
	~SpeachManager();
	// 显示菜单
	void showMenu();
	// 退出
	void exitSystem();
	// 初始化管理类
	void initSpeachManager();
	// 创建比赛选手
	void creatSpeaker();
	// 开始比赛
	void startSpeach();
	// 抽签
	void speechDraw();
};


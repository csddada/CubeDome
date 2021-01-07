#pragma once
#include<iostream>
using namespace std;

// 管理类
// 界面交互与文件存储交互
class SpeachManager
{
public:
	SpeachManager();
	~SpeachManager();
	// 显示菜单
	void showMenu();
	// 退出
	void exitSystem();
};


#include<iostream>
#include "SpeachManager.h"
using namespace std;

int main() {
	
	
	SpeachManager manager;
	// 存储选择
	int choice = 0;
// 	test
// 		for (map<int, Speaker>::iterator it = manager.m_Speaker.begin(); it != manager.m_Speaker.end(); it++)
// 		{
// 			cout << it->first << it->second.getName() << endl;
// 		}
	while (true) {
		manager.showMenu();
		cout << "输入你的选择" << endl;
		cin >> choice;
		switch (choice)
		{
			// 开始比赛
			manager.startSpeach();
		case 1:
			break;
			// 查看往届比赛
		case 2:
			break;
			// 清空
		case 3:
			break;
			// 退出
		case 0:
			manager.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}
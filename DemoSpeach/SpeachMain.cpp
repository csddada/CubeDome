#include<iostream>
#include "SpeachManager.h"
using namespace std;

int main() {
	
	
	SpeachManager manager;
	// �洢ѡ��
	int choice = 0;
// 	test
// 		for (map<int, Speaker>::iterator it = manager.m_Speaker.begin(); it != manager.m_Speaker.end(); it++)
// 		{
// 			cout << it->first << it->second.getName() << endl;
// 		}
	while (true) {
		manager.showMenu();
		cout << "�������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
			// ��ʼ����
			manager.startSpeach();
		case 1:
			break;
			// �鿴�������
		case 2:
			break;
			// ���
		case 3:
			break;
			// �˳�
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
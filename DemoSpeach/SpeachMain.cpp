#include<iostream>
#include "SpeachManager.h"
using namespace std;

int main() {
	SpeachManager manager;
	// �洢ѡ��
	int choice = 0;

	while (true) {
		manager.showMenu();
		cout << "�������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
			// ��ʼ����
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
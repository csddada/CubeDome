#include "SpeachManager.h"
SpeachManager::SpeachManager() {

}

SpeachManager::~SpeachManager() {

}

void SpeachManager::showMenu() {
	cout << "**********************************" << endl;
	cout << "************��ӭ�μӱ���**********" << endl;
	cout << "***********1.��ʼ�ݽ�����*********" << endl;
	cout << "***********2.�鿴�������*********" << endl;
	cout << "***********3.��ձ�����¼*********" << endl;
	cout << "***********4.�˳���������*********" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}

void SpeachManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
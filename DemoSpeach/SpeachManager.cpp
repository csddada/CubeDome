#include "SpeachManager.h"
#include <algorithm>

SpeachManager::SpeachManager() {
	this->initSpeachManager();
	this->creatSpeaker();
}

SpeachManager::~SpeachManager() {

}

void SpeachManager::startSpeach() {
	// first round
	// random
	speechDraw();
	// battle
	// show result
	// second round
	// random
	// battle
	// show result
	// save score

}

void SpeachManager::speechDraw() {
	cout << "��" << this->m_index << "�ֱ�����ʼ��ǩ" << endl;
	cout << "---------------------------" << endl;
	cout << "��ǩ������£�" << endl;
	if (this->m_index == 1) {
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	else {
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "---------------------------" << endl;
	system("pause");
}


void SpeachManager::initSpeachManager() {
	this->v1.clear();
	this->v2.clear();
	this->victory.clear();
	this->m_Speaker.clear();
	this->m_index = 1;
}

void SpeachManager::creatSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++) {
		string name = "ѡ��";
		name += nameSeed[i];
		Speaker speaker;
		speaker.setName(name);

		for (int j = 0; j < 2; j++) {
			speaker.m_Score[j] = 0;
		}
		// ѡ�ֱ��
		this->v1.push_back(i + 10001);
		this->m_Speaker.insert(make_pair(i + 10001, speaker));
	}
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
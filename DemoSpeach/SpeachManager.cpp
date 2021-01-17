#include "SpeachManager.h"
SpeachManager::SpeachManager() {
	this->initSpeachManager();
}

SpeachManager::~SpeachManager() {

}

void SpeachManager::initSpeachManager() {
	this->v1.clear();
	this->v2.clear();
	this->victory.clear();
	this->m_Speaker.clear();
	this->m_index = 1;
}

void SpeachManager::showMenu() {
	cout << "**********************************" << endl;
	cout << "************欢迎参加比赛**********" << endl;
	cout << "***********1.开始演讲比赛*********" << endl;
	cout << "***********2.查看往届比赛*********" << endl;
	cout << "***********3.清空比赛记录*********" << endl;
	cout << "***********4.退出比赛程序*********" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}

void SpeachManager::exitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
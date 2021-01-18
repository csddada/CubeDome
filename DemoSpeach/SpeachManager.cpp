#include "SpeachManager.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>

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
	speachContest();
	// show result
	// second round
	// random
	// battle
	// show result
	// save score

}

void SpeachManager::speachContest() {
	cout << "第" << this->m_index << "轮比赛开始" << endl;
	// 记录比赛分数
	multimap<double, int, greater<double>>groupScore;
	// 记录人数
	int num = 0;
	vector <int> v_speaker;
	if (this->m_index == 1) {
		v_speaker = v1;
	}
	else {
		v_speaker = v2;
	}
	// 评委打分
	for (vector<int>::iterator it = v_speaker.begin(); it != v_speaker.end(); it++) {
		num++;
		deque<double> score;
		for (int i = 0; i < 10; i++) {
			double result = (rand() % 41 + 600) / 10.0f;
			score.push_back(result);
		}
		sort(score.begin(), score.end(), greater<double>());
		score.pop_back();
		score.pop_front();

		double sum = accumulate(score.begin(), score.end(), 0.0f);
		double avg = sum / (double)score.size();
		this->m_Speaker[*it].m_Score[this->m_index - 1] = avg;
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0) {
			cout << "第" << num/6 << "小组比赛名次" << endl;
			int count = 0;
			for (auto& it : groupScore) {
				if (this->m_index == 1 && count < 3) {
					v1.push_back(it.second);
				}
				else if (this->m_index == 2 && count < 3) {
					victory.push_back(it.second);
				}
				cout << "编号：" << it.second << "姓名：" << this->m_Speaker[it.second].getName() << "分数：" <<
					this->m_Speaker[it.second].m_Score[this->m_index - 1] << endl;
				count++;
			}
			groupScore.clear();
		}
	}
	cout << "第" << this->m_index << "轮比赛结束" << endl;
	system("pause");
}

void SpeachManager::speechDraw() {
	cout << "第" << this->m_index << "轮比赛开始抽签" << endl;
	cout << "---------------------------" << endl;
	cout << "抽签结果如下：" << endl;
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
		string name = "选手";
		name += nameSeed[i];
		Speaker speaker;
		speaker.setName(name);

		for (int j = 0; j < 2; j++) {
			speaker.m_Score[j] = 0;
		}
		// 选手编号
		this->v1.push_back(i + 10001);
		this->m_Speaker.insert(make_pair(i + 10001, speaker));
	}
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
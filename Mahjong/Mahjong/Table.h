#pragma once
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;
class Table
{
public:
	Table();                           //���ƽ��г�ʼ��
	string Deal();                     //����
private:
	vector<string> Mahjong_Init;       //������е���
	int idx;                           //���ڼ�¼���˼�����
	struct Information
	{
		vector<string> Hasplayed;
		vector<string> Peng;
		vector<string> Gang;
	}Player[4];
};
#pragma once
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;
class Table
{
public:
	Table();                           //对牌进行初始化
	string Deal();                     //发牌
private:
	vector<string> Mahjong_Init;       //存放所有的牌
	int idx;                           //用于记录发了几张牌
	struct Information
	{
		vector<string> Hasplayed;
		vector<string> Peng;
		vector<string> Gang;
	}Player[4];
};
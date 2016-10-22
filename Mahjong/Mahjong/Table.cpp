#include"Table.h"
#include<time.h>
using namespace std;
Table::Table()
{
	bool Pai[108] = { false };
	srand(unsigned(time(0)));
	int tmp;
	string tmpchar(2, 0);
	for (int i = 0; i < 108;)
	{
		tmp = rand() % 108;
		if (!Pai[tmp])
		{
			i++;
			Pai[tmp] = true;
			switch (tmp / 36)
			{
			case 0:
				tmpchar[0] = 'B';
				tmpchar[1] = tmp / 4 + 1 + '0';
				break;
			case 1:
				tmpchar[0] = 'T';
				tmpchar[1] = (tmp - 36) / 4 + 1 + '0';
				break;
			default:
				tmpchar[0] = 'W';
				tmpchar[1] = (tmp - 72) / 4 + 1 + '0';
				break;
			}
			Mahjong_Init.push_back(tmpchar);
		}
	}
	idx = 0;
}

string Table::Deal()
{
	string Output;
	Output = Mahjong_Init[idx];
	Output = '0' + Output + '0';
	return Output;
}
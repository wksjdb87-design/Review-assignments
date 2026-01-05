#include <iostream>

using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;
}

void addPotion(int* HPPotion, int* MPPotion)
{
	*HPPotion = *HPPotion + 1;
	*MPPotion = *MPPotion + 1;
	cout << " 체력 포션과 마나 포션이 각각 1개씩 지급되었습니다" << endl;
}

int main()
{
	int status[4];
	int p_hppotion;
	int p_mppotion;
	int levelcount = 0;
	int level = 1;
	int num;
	bool isEnd = false;

	cout << " 체력과 마나을 입력해주세요" << endl;

	while (!isEnd)
	{
		cout << " ";
		cin >> status[0];
		cout << " ";
		cin >> status[1];

		if (status[0] <= 50 || status[1] <= 50)
		{
			cout << "\n 체력과 마나은 각각 50이 넘어야 합니다. 다시 입력해주세요\n" << endl;
		}

		if (status[0] > 50 && status[1] > 50)
		{
			isEnd = true;
		}
	}

	cout << "\n 공격력과 방어력을 입력해주세요" << endl;
	isEnd = false;
	while (!isEnd)
	{
		cout << " ";
		cin >> status[2];
		cout << " ";
		cin	>> status[3];

		if (status[2] <= 0 || status[3] <= 0)
		{
			cout << "\n 공격력과 방어력은 각각 0이 넘어야 합니다. 다시 입력해주세요\n" << endl;
		}

		if (status[2] > 0 && status[3] > 0)
		{
			isEnd = true;
		}
	}

	setPotion(5, &p_hppotion, &p_mppotion);
	cout << "\n 체력 포션과 마나 포션이 각각 5개씩 지급되었습니다. \n 현제 체력 포션 수 [" << p_hppotion << "] \n 현재 마나 포션 수 [" << p_mppotion << "]\n" << endl;;

	isEnd = false;
	while (!isEnd)
	{
		cout << "============ 스탯 관리 시스템 ============" << endl;
		cout << " 1. HP UP \n 2. MP UP \n 3. 공격력 UP \n 4. 방어력 UP \n 5. 현재 능력치 \n 6. Level Up \n 0. 나가기" << endl;
		cout << "\n 번호를 입력해주세요" << endl;

		cout << " ";
		cin >> num;

		switch (num)
		{
		case 1:
			if (p_hppotion == 0)
			{
				cout << "\n 체력 포션이 부족합니다\n" << endl;
				break;
			}
			cout << "\n 체력 포션 1개를 사용해 체력이 20 증가하였습니다" << endl;
			status[0] += 20;
			cout << " 현제 체력 [" << status[0] << "]" << endl;
			p_hppotion--;
			cout << " 남은 체력 포션 [" << p_hppotion << "]\n" << endl;
			break;

		case 2:
			if (p_mppotion == 0)
			{
				cout << "\n 마나 포션이 부족합니다\n" << endl;
				break;
			}
			cout << "\n 마나 포션 1개를 사용해 마나가 20 증가하였습니다" << endl;
			status[1] += 20;
			cout << " 현제 마나 [" << status[1] << "]" << endl;
			p_mppotion--;
			cout << " 남은 마나 포션 [" << p_mppotion << "]\n" << endl;
			break;

		case 3:
			cout << "\n 공격력이 2배 증가하였습니다" << endl;
			status[2] *= 2;
			cout << " 현제 공격력 [" << status[2] << "]\n" << endl;
			break;

		case 4:
			cout << "\n 방어력이 2배 증가하였습니다" << endl;
			status[3] *= 2;
			cout << " 현제 방어력 [" << status[3] << "]\n" << endl;
			break;

		case 5:
			cout << "\n============ 현재 능력치 및 포션 갯수 =============" << endl;
			cout << " 레벨 [" << level << "] \n 체력 [" << status[0] << "] \n 마나 [" << status[1] << "] \n 공격력 [" << status[2] << "] \n 방어력 [" << status[3] << "] \n 체력 포션[" << p_hppotion << "] \n 마나 포션 [" << p_mppotion << "]\n" << endl;
			break;

		case 6:
			levelcount++;
			cout << "\n 경험치가 증가하였습니다 [" << levelcount << "/6]\n" << endl;
			if (levelcount == 6)
			{
				cout << " 레벨이 1 상승하였습니다" << endl;
				addPotion(&p_hppotion, &p_mppotion);
				level++;
				cout << " 현재 레벨 [" << level << "]\n 체력 포션 [" << p_hppotion << "] \n 마나 포션 [" << p_mppotion << "]\n" << endl;
				levelcount = 0;
				break;
			}
			break;

		case 0:
			cout << " 시스템이 종료되었습니다" << endl;
			isEnd = true;
			break;
		}
	}
}
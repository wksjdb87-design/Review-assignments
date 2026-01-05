#include <iostream>

using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	count = 5;
	*p_HPPotion = count;
	*p_MPPotion = count;
}

int main()
{
	int status[4];
	int p_hppotion;
	int p_mppotion;
	int level = 1;
	bool isEnd = false;
	int num;
	int a = 1;

	cout << "체력과 마나량을 입력하세요" << endl;

	while (!isEnd) {
		cin >> status[0] >> status[1];
		if (status[0] <= 50 || status[1] <= 50)
		{
			cout << "체력과 마나량은 각각 50보다 높아야 합니다 다시 입력해주세요" << endl;
		}

		if (status[0] > 50 || status[1] > 50)
		{
			isEnd = true;
		}
	}

	cout << "공격력과 방어력을 입력하세요" << endl;
	isEnd = false;
	while (!isEnd) {
		cin >> status[2] >> status[3];
		if (status[2] <= 0 || status[3] <= 0)
		{
			cout << "공격력과 방어력은 각각 0보다 높아야 합니다 다시 입력해주세요" << endl;
		}

		if (status[2] > 0 || status[3] > 0)
		{
			isEnd = true;
		}
	}

	setPotion(5, &p_hppotion, &p_mppotion);
	cout << " 체력 포션과 마나 포션이 각각 5개씩 지급되었습니다" << endl;

	isEnd = false;
	while (!isEnd)
	{
		cout << "\n================= 스탯 관리 시스템 =====================" << endl;
		cout << " 1. HP UP \n 2. MP UP \n 3. 공격력 UP \n 4. 방어력 UP \n 5. 현재 능력치 \n 6. 레벨 업 \n 0. 나가기" << endl;

		cin >> num;

		switch (num) {
		case 1:
			if (p_hppotion == 0)
			{
				cout << " 남은 체력 포션이 없습니다" << endl;
				break;
			}
			p_hppotion--;
			status[0] += 20;
			cout << " 체력 포션이 1 개 사용되었습니다 체력 포션 남은 개수 [" << p_hppotion << "] " << endl;
			cout << " 현재 체력 [" << status[0] << "] " << endl;
			break;

		case 2:
			if (p_mppotion == 0)
			{
				cout << " 남은 마나 포션이 없습니다" << endl;
				break;
			}
			p_mppotion--;
			status[1] += 20;
			cout << " 마나 포션이 1 개 사용되었습니다 마나 포션 남은 개수 [" << p_mppotion << "] " << endl;
			cout << " 현재 마나 [" << status[1] << "] " << endl;
			break;

		case 3:
			cout << " 공격력이 2배 증가되었습니다" << endl;
			status[2] *= 2;
			cout << " 현재 공격력 [" << status[2] << "] " << endl;
			break;

		case 4:
			cout << " 방어력이 2배 증가되었습니다" << endl;
			status[3] *= 2;
			cout << " 현재 방어력 [" << status[3] << "] " << endl;
			break;

		case 5:
			cout << "============현재 능력치=============" << endl;
			cout << "    레벨   [" << level << "] \n    체력   [" << status[0] << "] \n    마나   [" << status[1] << "] \n   공격력  [" << status[2] << "] \n   방어력  [" << status[3] << "] \n 체력 포션 [" << p_hppotion << "] \n 마나 포션 [" << p_mppotion << "]" << endl;
			break;

		case 6:
			cout << " 레벨이 1 올랐습니다" << endl;
			level++;
			cout << " 체력 포션과 마나 포션이 각각 한 개씩 지급되었습니다" << endl;
			p_hppotion++;
			p_mppotion++;
			cout << " 현제 레벨 [" << level << "] \n 보유 중인 체력 포션 [" << p_hppotion << "] \n 현재 보유 중인 마나 포션 [" << p_mppotion << "]" << endl;
		
		case 0:
			cout << " 게임이 종료되었습니다" << endl;
			isEnd = true;
			break;
		}
	}
}

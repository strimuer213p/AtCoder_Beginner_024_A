/*
��蕶
ABC�������́A���������ň�Ԃ̐l�C���ւ铮�����ł��B
ABC�������̓��ꗿ�̐ݒ�͈ȉ��̂悤�ɂȂ��Ă��܂��B
�q�� 1 �l������ A �~
��l 1 �l������ B �~
���v�l���� K �l�ȏ�̒c�̂� 1 �l������ C �~����
���A�q�� S �l�A��l T �l����Ȃ�c�̂����ꂵ�悤�Ƃ��Ă��܂��B ���̒c�̂����v�Ŏx����Ȃ���΂Ȃ�Ȃ����ꗿ�����߂Ă��������B
*/

#include<iostream>

int main() {
	int  childrenfee, adultfee, discount, target,children, adult,sum;
	std::cin >> childrenfee >> adultfee >> discount >> target;
	std::cin >> children >> adult;

	sum = children*childrenfee + adult*adultfee;

	if (target <= children + adult) {
		sum -= discount*(children + adult);
	}
	std::cout << sum << std::endl;

	return 0;
}
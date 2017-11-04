/*
問題文
ABC動物園は、高橋王国で一番の人気を誇る動物園です。
ABC動物園の入場料の設定は以下のようになっています。
子供 1 人あたり A 円
大人 1 人あたり B 円
合計人数が K 人以上の団体は 1 人あたり C 円引き
今、子供 S 人、大人 T 人からなる団体が入場しようとしています。 この団体が合計で支払わなければならない入場料を求めてください。
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
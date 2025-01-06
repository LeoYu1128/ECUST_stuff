#include <stdio.h>
#define price 1
int main()
{
	int months=12;
	int days=20;
	int money=months*days*(price+price);
	printf("小明一年骑单车的费用为：%d元\n",money);
	return 0;
}

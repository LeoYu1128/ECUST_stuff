#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,c,d,e;
	char gamer;
	printf("这是一个抢红包小游戏，请输入你要抢的红包：\n");
	printf("A:红包A\nB:红包B\nC:红包C\nD:红包D\nE:红包E\n");
	scanf("%c",&gamer);
	srand((unsigned)time(NULL));
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	d=rand()%100;
	e=rand()%100;
	printf("红包A: %d元\n",a);
	printf("红包B: %d元\n",b);
	printf("红包C: %d元\n",c);
	printf("红包D: %d元\n",d);
	printf("红包E: %d元\n",e);
	printf("你抢到了红包%c\n",gamer);
	return 0;
}
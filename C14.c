#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b,c,d,e;
	char gamer;
	printf("����һ�������С��Ϸ����������Ҫ���ĺ����\n");
	printf("A:���A\nB:���B\nC:���C\nD:���D\nE:���E\n");
	scanf("%c",&gamer);
	srand((unsigned)time(NULL));
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	d=rand()%100;
	e=rand()%100;
	printf("���A: %dԪ\n",a);
	printf("���B: %dԪ\n",b);
	printf("���C: %dԪ\n",c);
	printf("���D: %dԪ\n",d);
	printf("���E: %dԪ\n",e);
	printf("�������˺��%c\n",gamer);
	return 0;
}
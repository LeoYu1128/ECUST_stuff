#include <stdio.h>
int main()
{
	int num;
	int money;
	int total=0;
	int *pnum=&num;
	int *pmoney=&money;
	int *ptotal=&total;
	printf("����������: ");
	scanf("%d",pnum);
	printf("���������: ");
	scanf("%d",pmoney);
	printf("�������ܽ��: ");
	*ptotal=(*pnum)*(*pmoney);
	printf("����ܽ��:%dԪ\n",total);
	return 0;
}
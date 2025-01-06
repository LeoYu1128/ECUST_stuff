#include <stdio.h>
int main()
{
	int num;
	int money;
	int total=0;
	int *pnum=&num;
	int *pmoney=&money;
	int *ptotal=&total;
	printf("输入红包个数: ");
	scanf("%d",pnum);
	printf("输入红包金额: ");
	scanf("%d",pmoney);
	printf("计算红包总金额: ");
	*ptotal=(*pnum)*(*pmoney);
	printf("红包总金额:%d元\n",total);
	return 0;
}
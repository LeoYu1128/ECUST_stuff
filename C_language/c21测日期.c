#include <stdio.h>
int main()
{
	int year=0,month=0,day=0;
	int iweek;
	printf("\n�����뵽������\n\37\37\37 ��ʽΪ�� �� �գ�2017 11 37\37\37\n");
	printf("�����룺\n");
	scanf("%d%d%d",&year,&month,&day);
	if(month==1||month==2)
	{
		month+=12;
		year--;
	}
	iweek=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
	if(iweek==0)
		printf("����һ\n");
	else if(iweek==1)
		printf("���ڶ�\n");
    else if(iweek==2)
		printf("������\n");
	else if(iweek==3)
		printf("������\n");
	else if(iweek==4)
		printf("������\n");
	else if(iweek==5)
		printf("������\n");
	else
		printf("������\n");
	return 0;
}
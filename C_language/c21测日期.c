#include <stdio.h>
int main()
{
	int year=0,month=0,day=0;
	int iweek;
	printf("\n请输入到访日期\n\37\37\37 格式为年 月 日：2017 11 37\37\37\n");
	printf("请输入：\n");
	scanf("%d%d%d",&year,&month,&day);
	if(month==1||month==2)
	{
		month+=12;
		year--;
	}
	iweek=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
	if(iweek==0)
		printf("星期一\n");
	else if(iweek==1)
		printf("星期二\n");
    else if(iweek==2)
		printf("星期三\n");
	else if(iweek==3)
		printf("星期四\n");
	else if(iweek==4)
		printf("星期五\n");
	else if(iweek==5)
		printf("星期六\n");
	else
		printf("星期日\n");
	return 0;
}
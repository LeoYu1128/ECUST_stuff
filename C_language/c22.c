#include <stdio.h>
int main()
{
	int year=0,month=0,day=0;
	int iweek;
	printf("\n請輸入到訪日期\n\37\37\37 格式為年 月 日：2017 11 37\37\37\n");
	printf("請輸入：\n");
	scanf("%d%d%d",&year,&month,&day);
	if(month==1||month==2)
	{
		month+=12;
		year--;
	}
	iweek=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
	switch(iweek)
	{
    case 0: printf("星期一\n");break;
	case 1: printf("星期二\n");break;
	case 2: printf("星期三\n");break;
	case 3: printf("星期四\n");break;
	case 4: printf("星期五\n");break;
	case 5: printf("星期六\n");break;
	case 6: printf("星期日\n");break;
	}
	return 0;
}

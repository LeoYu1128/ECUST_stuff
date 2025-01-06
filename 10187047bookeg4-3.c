#include <stdio.h>
int main()
{
	//存放到访日期年、月、日
	int year=0,month=0,day=0;
	printf("\n请输入到访日期\n\37\37\37  格式为年 月 日：2017 1 1 \37\37\37\n");
	printf("请输入：");
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
		day=29;
	else
		day=28;
	printf("二月天数为：%d。\n",day);
	return 0;
}
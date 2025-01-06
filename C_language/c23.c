#include <stdio.h>
int main()
{
    int year=0,month=0,day=0;
    int Month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int date_no=1;
    while(date_no)
{
    printf("\n請輸入到訪日期\n\37\37\37 格式為年 月 日：2017 11 37\37\37\n");
	printf("請輸入：\n");
	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
        Month[2]++;
    if(day<=Month[month]&&day>0&&month<13&&month>0&&year>1&&year<3000)
        date_no=0;
    else
        printf("輸入的日期不符合,請重新輸入!");
}
}

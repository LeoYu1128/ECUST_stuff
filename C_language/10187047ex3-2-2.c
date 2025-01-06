#include <stdio.h>
void main()
{
	int s_k,s_x,s_d,sum;
	printf("欢迎进入成绩管理系统！\n");
	printf("系统开发人员: 某某某！\n");
	printf("系统版本信息: 第一版！\n");
	printf("请依次输入考勤分数,小作业分数,大作业分数得分，并以英文逗号隔开: \n");
	scanf("%d,%d,%d",&s_k,&s_x,&s_d);
	sum=s_k+s_x+s_d;
	printf("平时成绩总分: %d\n",sum);
}

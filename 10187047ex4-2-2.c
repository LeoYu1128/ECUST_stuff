#include <stdio.h>
void main()
{
	float s_k,s_x,s_d,sum;
	printf("欢迎进入成绩管理系统！\n");
	printf("系统开发人员: 某某某！\n");
	printf("系统版本信息: 第二版！\n");
	printf("请依次输入考勤分数,小作业分数,大作业分数得分，以英文逗号隔开: \n");
	scanf("%f,%f,%f",&s_k,&s_x,&s_d);
	if((s_k<0||s_k>10)||(s_x<0||s_x>10)||(s_d<0||s_d>10))
	{printf("各项分数应该在0-10分之间，请退出重试！\n");
	}
	else
	{
		sum=s_k+s_x+s_d;
		printf("平时成绩总分：%f\n",sum);
	}
}
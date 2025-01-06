#include <stdio.h>
int main()
{
	int age;
	int ticket_o=0,ticket_p=0;
	printf("请输入您的年龄：\n");
	scanf("%d",&age);
	if(age>=65)
	{
		ticket_o=280;
		ticket_p=375;
		printf("欢迎光临迪士尼乐园！您购买的是老年人票！\n");
		printf("平日票价为：%d元\n高峰日票价为：%d元\n",ticket_o,ticket_p);
	}
	return 0;
}
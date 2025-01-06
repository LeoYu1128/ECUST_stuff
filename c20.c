#include <stdio.h>
int main()
{
	int age;
	printf("欢迎来到神秘的宝藏湾：\n");
	printf("请输入你的年龄：\n");
	scanf("%d",&age);
	if(age>=65)
		printf("Hi!老伙计!欢迎加入海盗队伍，去寻找返老还童的时光吧!\n");
	else if(age>=16 && age<65)
		printf("Hi!年轻人!来一场寻宝之旅吧!\n");
	else
		printf("Hi!小水手!\n");
	return 0;
}

		
#include <stdio.h>
int main()
{
	int age;
	printf("��ӭ�������صı����壺\n");
	printf("������������䣺\n");
	scanf("%d",&age);
	if(age>=65)
		printf("Hi!�ϻ��!��ӭ���뺣�����飬ȥѰ�ҷ��ϻ�ͯ��ʱ���!\n");
	else if(age>=16 && age<65)
		printf("Hi!������!��һ��Ѱ��֮�ð�!\n");
	else
		printf("Hi!Сˮ��!\n");
	return 0;
}

		
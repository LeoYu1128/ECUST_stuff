#include <stdio.h>
int main()
{
	int age;
	int ticket_o=0,ticket_p=0;
	printf("�������������䣺\n");
	scanf("%d",&age);
	if(age>=65)
	{
		ticket_o=280;
		ticket_p=375;
		printf("��ӭ���ٵ�ʿ����԰�����������������Ʊ��\n");
		printf("ƽ��Ʊ��Ϊ��%dԪ\n�߷���Ʊ��Ϊ��%dԪ\n",ticket_o,ticket_p);
	}
	return 0;
}
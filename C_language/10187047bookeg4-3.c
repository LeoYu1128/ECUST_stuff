#include <stdio.h>
int main()
{
	//��ŵ��������ꡢ�¡���
	int year=0,month=0,day=0;
	printf("\n�����뵽������\n\37\37\37  ��ʽΪ�� �� �գ�2017 1 1 \37\37\37\n");
	printf("�����룺");
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
		day=29;
	else
		day=28;
	printf("��������Ϊ��%d��\n",day);
	return 0;
}
#include <stdio.h>
void main()
{
	float s_k,s_x,s_d,sum;
	printf("��ӭ����ɼ�����ϵͳ��\n");
	printf("ϵͳ������Ա: ĳĳĳ��\n");
	printf("ϵͳ�汾��Ϣ: �ڶ��棡\n");
	printf("���������뿼�ڷ���,С��ҵ����,����ҵ�����÷֣���Ӣ�Ķ��Ÿ���: \n");
	scanf("%f,%f,%f",&s_k,&s_x,&s_d);
	if((s_k<0||s_k>10)||(s_x<0||s_x>10)||(s_d<0||s_d>10))
	{printf("�������Ӧ����0-10��֮�䣬���˳����ԣ�\n");
	}
	else
	{
		sum=s_k+s_x+s_d;
		printf("ƽʱ�ɼ��ܷ֣�%f\n",sum);
	}
}
#include <stdio.h>
void main()
{
	float a,b,c,max;
	printf("�������������֣���Ӣ�Ķ��Ÿ�����\n");
		scanf("%f,%f,%f",&a,&b,&c);
		if(a>b)
			max=a;
		else
			max=b;
		if(c>max)
			max=c;
		printf("max=%f\n",max);
}
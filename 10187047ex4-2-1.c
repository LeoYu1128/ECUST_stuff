#include <stdio.h>
void main()
{
	float a,b,c,max;
	printf("请输入三个数字，以英文逗号隔开：\n");
		scanf("%f,%f,%f",&a,&b,&c);
		if(a>b)
			max=a;
		else
			max=b;
		if(c>max)
			max=c;
		printf("max=%f\n",max);
}
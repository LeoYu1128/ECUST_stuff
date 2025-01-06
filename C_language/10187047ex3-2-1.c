#include <stdio.h>
void main()
{
	float a,b,sum,sub,mul,div;
	printf("请输入两个非零数字，以英文逗号隔开: \n");
	scanf("%f,%f",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("sum=%f\nsub=%f\nmul=%f\ndiv=%f\n",sum,sub,mul,div);
}

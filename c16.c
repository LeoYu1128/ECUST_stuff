#include <stdio.h>
int main()
{
	char c1,c2;
	printf("请输入一个小写字母:");
	c1=getchar();
	c2=c1-32;
	printf("%c的小写字母为: %c\n",c1,c2);
	return 0;
}
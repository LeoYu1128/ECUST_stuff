#include <stdio.h>
void main()
{ 
	int i,sum=0;
	for(i=2;i<=100;i=i+2)
			sum=sum+i;
	printf("1~100所有偶数和为：%d\n",sum);
}

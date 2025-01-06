#include <stdio.h>
#include <math.h>
void main()
{
	int m,k,i,n=0;
	printf("100~200之间全部的素数是：\n");
	for(m=101;m<=199;m=m+2)
	{   k=(int)sqrt(m);
		for(i=2;i<=k;i++)
			if(m%i==0)break;	
		if(i==k+1)
		printf("%d ",m);
	}
}
#include <stdio.h>
void main()
{
	int m,n;
	for(n=1;n<=4;n++)
	{
		for(m=1;m<=4-n;m++)
			printf(" ");
		for(m=1;m<=2*n-1;m++)
			printf("*");
		printf("\n");
	}
}
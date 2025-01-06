#include<stdio.h>
int main()
{
	int n,digit;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The number in reverse order is:");
	do
	{
		digit=n%10;
		printf("%d",digit);
		n=n/10;
	}
	while(n!=0);
	printf("\n");
	return 0;
}
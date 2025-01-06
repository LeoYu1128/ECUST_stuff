#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	ch=getchar();
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
		printf("It is a letter.\n");
	else if(ch>='0' && ch<='9')
		printf("It is a number.\n");
	else if(ch=='*')
		printf("It is a '*'.\n");
	else
		printf("It is a other letter.\n");
	return 0;
}
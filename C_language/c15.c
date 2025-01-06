#include <stdio.h>
int main()
{
	char ch1,ch2,ch3;
	ch1='n';
	ch2='e';
	ch3='\167';
	printf("%c%c%c\n",ch1,ch2,ch3);
	printf("%c\t%c\t%c\n",ch1,ch2,ch3);
	printf("%c\n%c\n%c\n",ch1,ch2,ch3);
	return 0;
}
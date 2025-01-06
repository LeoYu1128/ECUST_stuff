#include <stdio.h>
int main()
{
	char ch;
	int count=0;
	while(1)
	{
		ch=getchar();
		if(ch=='\n')break;
		if(ch>='A'&&ch<='Z')
			count++;
	}
	printf("count=%d\n",count);
}
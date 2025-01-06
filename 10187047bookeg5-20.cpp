#include <stdio.h>
int main()
{ 
	int f0=0,f1=1,fn;
int i=1;
printf("%6d%6d",f0,f1);
for(i=2;i<25;i++)
{
	if(i%5==0)
		printf("\n");
	fn=f0+f1;
	printf("%6d",fn);
	f0=f1;
	f1=fn;
}
printf("\n");
return 0;
}
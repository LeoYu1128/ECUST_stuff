#include <stdio.h>
int main()
{
	float s,x,y,t,k;
	int i;
	s=1;
	x=1;
	y=2;
	t=x/y;
	for(i=2;i<=20;i=i+1)
	{
		s=s+t;
		k=x;
		x=y;
		y=k+y;
		t=x/y;
	}
	printf("ǰ20��ĺͣ�%f\n",s);
		return 0;
}
#include <stdio.h>
int main()
{
	int year=0,month=0,day=0;
	int iweek;
	printf("\n�п�J��X���\n\37\37\37 �榡���~ �� ��G2017 11 37\37\37\n");
	printf("�п�J�G\n");
	scanf("%d%d%d",&year,&month,&day);
	if(month==1||month==2)
	{
		month+=12;
		year--;
	}
	iweek=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
	switch(iweek)
	{
    case 0: printf("�P���@\n");break;
	case 1: printf("�P���G\n");break;
	case 2: printf("�P���T\n");break;
	case 3: printf("�P���|\n");break;
	case 4: printf("�P����\n");break;
	case 5: printf("�P����\n");break;
	case 6: printf("�P����\n");break;
	}
	return 0;
}

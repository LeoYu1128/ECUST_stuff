#include <stdio.h>
int main()
{
    float a,b;
    float result;
    int choice=1;
	while(choice!=0)
{
    printf("�������һ������ \n");
    scanf("%f",&a);
    printf("������ڶ������� \n");
    scanf("%f",&b);
    result=a+b;
    printf("a+b=%f\n",result);
    result=a*b;
    printf("a*b=%f\n",result);
    result=a-b;
    printf("a-b=%f\n",result);
    result=(double)a/b;
    {if(b!=0)
        printf("a/b=%f\n",result);
    else
        printf("��������Ϊ��!!\n");
    }
    printf("0--�˳�\n");
	printf("������������\n");
    scanf("%d",&choice);
}
    return 0;
}

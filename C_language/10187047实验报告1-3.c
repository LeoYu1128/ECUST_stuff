#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,b,c,x;
    char ch;
    srand(time(NULL));
    printf("��ӭ���������С��Ϸ\n");
    printf("��ش�����δ֪��x\n");
    do
    {
    a=(rand()%50+1);
    b=(rand()%50+1);
    c=rand()%4;
    switch(c)
    {
    case 0: printf("%d+%d=x\n",a,b);scanf("%d",&x);x==a+b?printf("�����\n"):printf("�����\n"); break;
    case 1: printf("%d-%d=x\n",a,b);scanf("%d",&x);x==a-b?printf("�����\n"):printf("�����\n"); break;
    case 2: printf("%d*%d=x\n",a,b);scanf("%d",&x);x==a*b?printf("�����\n"):printf("�����\n"); break;
    case 3: printf("%d/%d=y(ȡ��)\n",a,b);scanf("%d",&x);x==a/b?printf("�����\n"):printf("�����\n"); break;
    }
    printf("Ҫ�����밴Y,�˳��밴N\n");
    getchar();
    ch=getchar();
    }
    while(ch=='Y');
    printf("\tѧ��10187047\t�����������\n");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,b,c,x;
    char ch;
    srand(time(NULL));
    printf("欢迎进入计算器小游戏\n");
    printf("请回答下列未知数x\n");
    do
    {
    a=(rand()%50+1);
    b=(rand()%50+1);
    c=rand()%4;
    switch(c)
    {
    case 0: printf("%d+%d=x\n",a,b);scanf("%d",&x);x==a+b?printf("答对啦\n"):printf("答错啦\n"); break;
    case 1: printf("%d-%d=x\n",a,b);scanf("%d",&x);x==a-b?printf("答对啦\n"):printf("答错啦\n"); break;
    case 2: printf("%d*%d=x\n",a,b);scanf("%d",&x);x==a*b?printf("答对啦\n"):printf("答错啦\n"); break;
    case 3: printf("%d/%d=y(取整)\n",a,b);scanf("%d",&x);x==a/b?printf("答对啦\n"):printf("答错啦\n"); break;
    }
    printf("要继续请按Y,退出请按N\n");
    getchar();
    ch=getchar();
    }
    while(ch=='Y');
    printf("\t学号10187047\t姓名：余政陽\n");
    return 0;
}

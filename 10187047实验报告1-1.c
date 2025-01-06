#include<stdio.h>
long f(int a)
{
    int p;
    if(a==1||a==0)
        p=1;
    else
        p=f(a-1)*a;
    return p;
}
int main()
{
    int n,m,x,t;
    printf("请输入n与m(12！以下)\n");
    scanf("%d %d",&n,&m);
    if(n<m)
    {
        t=n;n=m;m=t;
    }
    printf("C(%d,%d)=%2d\n",n,m,f(n)/f(m)/f(n-m));
    printf("\t学号10187047\t姓名：余政陽\n");
    return 0;
}

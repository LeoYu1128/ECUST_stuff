#include<stdio.h>
int main()
{
    int a,b,c,d,s;
    printf("请输入三角形边长");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b<c)
        printf("输入有误");
    if (a-b>c)
        printf("输入有误");
    else
        s=(a+b+c)/2;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("三角形面积为%d",d);
}

#include<stdio.h>
int main()
{
    int a,b,c,d,s;
    printf("�����������α߳�");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b<c)
        printf("��������");
    if (a-b>c)
        printf("��������");
    else
        s=(a+b+c)/2;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("���������Ϊ%d",d);
}

#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("input a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        max=a;
    else
        max=b;
    if(c>max)
        max=c;
    printf("Max=%d\n",max);
    return 0;
}

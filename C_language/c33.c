#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    printf("please input a number:");
    scanf("%d",&n);
    j=1;
    do
    {
        k=j;
        m=0;
        for(i=1;i<=n;i++)
        {
            m=m+k;
            k=k+2;
        }
        if(m==n*n*n) break;
        else j=j+2;
    }
    while(1);
    for(i=1;i<=n;i++)
    {
        printf("%d",j);
        j+=2;
        printf("\n");
    }
}

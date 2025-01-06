#include <stdio.h>
int main()
{
    int i,j,count=0;
    printf("\t紅球 白球 藍球\n");
    printf("....................................................\n");
    for(i=0;i<=3;i++)
        for(j=0;j<=4;j++)
            if(6-i-j<=2&&6-i-j>=0)
    {
        count=count+1;
        printf("方案%d:%5d%5d%5d\n",count,i,j,6-i-j);
    }
    return 0;
}

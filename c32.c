#include <stdio.h>
int main()
{
    int m,i,j,k,t;
    printf("�п�J��}��m:\n");
    scanf("%d",&m);
    printf("��}�p�U\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            t=(i+j)%m;
            for(k=0;k<m;k++)
                printf("%d",(k+t)%m+1);
            printf("\n");
        }
        printf("\n");
    }
}

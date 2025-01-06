#include <stdio.h>
void sort(float a[],int n)
{
    int i,j,k,jmax;
    float temp;
    k=j;
    for(j=0;j<k-1;j++)
    {
        jmax=j;
        for(i=j+1;j<k;j++)
        {
            if(a[i]>a[jmax])
                jmax=i;
        }
            if(jmax!=j)//k=j;
                {temp=a[jmax];a[jmax]=a[j];a[j]=temp;}
    }
}
void main()
{
    float b[5]={1.2,5.3,2.1,1.4,11};
    int c;
    sort(b,5);
    for(c=0;c<5;c++)
        printf("%.2f ",b[c]);
    printf("\n");
}

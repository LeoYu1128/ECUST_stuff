#include<stdio.h>
#define N 20
int sort(int a[],int n)
{
    int i,j,t,imax;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	n=i;
	for(i=0;i<n-1;i++)
	{
		imax=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[imax])
			imax=j;
		}
			if(imax!=i)
			{
				t=a[imax];
				a[imax]=a[i];
				a[i]=t;
			}
	}
	return 0;
}
int main()
{
    int j,x,b[N];
    printf("������Ҫ���뼸�����ݣ�\n");
    scanf("%d",&x);
    printf("����������:\n");
    for(j=0;j<x;j++)
    scanf("%d",&b[j]);
    sort(b,x);
    printf("������������£�\n");
    for(j=0;j<x;j++)
    printf("%d ",b[j]);
    printf("\n");
    return 0;
}

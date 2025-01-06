#include<stdio.h>
#define N 10
int main()
{
	int n,t,j,imax;
	int i=0;
	double a[N];
	FILE *fp;
	fp=fopen("D:\\money.txt","r");
	while(!feof(fp))
	{
	fscanf(fp,"%lf",&a[i]);
	i++;
	}
	fscanf(fp,"%lf",&a[i]);
	n=i;
	for(i=0;i<n-1;i++)
	{
	imax=i;
	for(j=i+1;j<n;j++)
		if(a[j]>a[imax])
			imax=j;
	if(imax!=i)
	{
	t=a[imax];
	a[imax]=a[i];
	a[i]=t;
	}
	}
	printf("\n排好后依次为：\n");
	for(i=0;i<n;i++)
		printf("%.2lf ",a[i]);
	printf("\n");
	return 0;
}

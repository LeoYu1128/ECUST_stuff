#include<stdio.h>
#define N 10
int main()
{
    int i,t,a,j,b[N],c;
    printf("������Ҫ���뼸�����ݣ�\n");
    scanf("%d",&a);
    printf("���������ݣ�\n");
    for(i=0;i<a;i++)
        scanf("%d",&b[i]);
   for(c=1;c<a;c++)
        for(j=0;j<a;j++)
        if(b[j]>b[j+1])
   {
       t=b[j];
       b[j]=b[j+1];
       b[j+1]=t;
   }
   printf("����������Ϊ��\n");
   for(i=0;i<a;i++)
    printf("%d ",b[i]);
   return 0;
}

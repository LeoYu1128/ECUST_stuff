#include"stdio.h"
#include"stdlib.h"
void main()
{
int a;
char write[100];
printf("����ػ�");
scanf("%d",&a);
system("shutdown -s -t a"); //�ػ�����,���60������,�����Լ��趨.
printf("��˵������!��Ȼ�͹ػ�!\n");
gt:
scanf("%s",write);
if(strcmp(write,"������")==0)
{
printf("����,������~\n");
system("shutdown -a");
}
if(strcmp(write,"������")!=0)
{
printf("����˵�ǰ�?��˵�͵ȹػ�!\n");
goto gt;
}
}

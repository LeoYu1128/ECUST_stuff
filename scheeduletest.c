#include"stdio.h"
#include"stdlib.h"
void main()
{
int a;
char write[100];
printf("几秒关机");
scanf("%d",&a);
system("shutdown -s -t a"); //关机命令,这个60是秒数,可以自己设定.
printf("快说你是猪!不然就关机!\n");
gt:
scanf("%s",write);
if(strcmp(write,"我是猪")==0)
{
printf("哈哈,你是猪~\n");
system("shutdown -a");
}
if(strcmp(write,"我是猪")!=0)
{
printf("还不说是吧?不说就等关机!\n");
goto gt;
}
}

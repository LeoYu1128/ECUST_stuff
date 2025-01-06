#include<stdio.h>
long f (int  n);
void  main (  )
 {int  i;
for (i = 1; i<=40; i++)
    {printf("F(%2d) = %-9ld",i,f(i));
     if(i% 4==0)
      printf("\n");
    }
printf("\n");
printf("\t学号：10187047 姓名：余政陽");
 }

 long  f(int  n)      //求斐波纳契数列的第n项
{if(n==1 || n==2)
    return(1);
 return(f(n-1)+f(n-2));
}

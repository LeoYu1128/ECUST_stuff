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
printf("\tѧ�ţ�10187047 �����������");
 }

 long  f(int  n)      //��쳲��������еĵ�n��
{if(n==1 || n==2)
    return(1);
 return(f(n-1)+f(n-2));
}

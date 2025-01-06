#include <stdio.h>
int main()
{
    int n,count=0;
    printf("請輸入一個數:\n");
    scanf("%d",&n);
    do{
      if(n%2!=0)
      {
         n=n*3+1;
         printf("[%d]:%d*3+1=%d\n",++count,(n-1)/3,n);
      }
      else
      {
          n=n/2;
          printf("[%d]:%d/2=%d\n",++count,2*n,n);
      }
      }
      while(n!=1);
      return 0;
}

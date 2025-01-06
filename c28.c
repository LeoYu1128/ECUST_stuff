#include <stdio.h>
int main()
{
    int n,digit;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The number in reverse order is:\n");
    do{digit=n%10;
       printf("%d",digit);
       n=n/10;
      }
      while(n!=0);
      return 0;
}

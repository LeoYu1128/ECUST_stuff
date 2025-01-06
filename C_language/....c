#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    srand(time(NULL));
    a=(rand()%4+1);
    printf("%d",a);
    return 0;
}

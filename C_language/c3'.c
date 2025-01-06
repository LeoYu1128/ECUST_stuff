#include <stdio.h>
int main()
{
    int x,y;
    double z;
    scanf("%d %d",&x,&y);
    z=(double)x/y;
    printf("z=%.11f\n",z);
    return 0;
}

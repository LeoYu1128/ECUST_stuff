#include <stdio.h>
#include <math.h>
int main()
{
    int sign=1;
    float n=1.0,t=1,pi,s=0;
    while(fabs(t)>=1e-6)
    {
        s=s+t;
        n=n+2;
        sign=-sign;
        t=sign*(1/n);
    }
    pi=s*4;
    printf("pi=%f\n",pi);
    return 0;
}

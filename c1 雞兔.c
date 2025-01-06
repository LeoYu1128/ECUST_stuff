#include <stdio.h>
int main()
{
    int head,feet;
    int chicken, rabbit;
    scanf("%d %d",&head,&feet);
    for(chicken=1;chicken<=head;chicken++)
    {   rabbit=head-chicken;
        if(chicken*2+rabbit*4==feet)
        break;
    }
printf("\nchicken=%d,rabbit=%d",chicken,rabbit);

return 0;
}

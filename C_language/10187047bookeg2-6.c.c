#include <stdio.h>
int main()
{
    int number,money;
    char confirm;
    printf("\n\t\tPlease input your number of red envelope:");
    scanf("%d",&number);
    printf("\n\t\tEach red envelope's value is:");
    scanf("%d",&money);
    getchar();
    printf("\n\n\t\tYES(Y)\t\tCANCLE(C)");
    scanf("%c",&confirm);
    printf("\n\t\tYou input %d red envelopes\t\tEach red envelope's value is %d dollars\n",number,money);
    return 0;
}

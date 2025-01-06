#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "showresult.h"
int main()
{
    char gamer;
    int computer;
    printf("猜拳小游戏，请输入你要出的拳头");
    printf("A:剪刀\nB:石头\nC:布\n");
    scanf("%c%*c,&gamer");
    srand((unsigned)time(NULL));
    computer=rand();
    computer %=3;
    printf("电脑出了");
    show_comp_fist(computer);
    printf("你出了");
    show_gamer_fist(gamer);
    show_result(computer,gamer);
    return 0;
}

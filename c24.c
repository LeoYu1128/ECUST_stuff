#include <stdio.h>
int main()
{
    int order;
    int number;
    float price;
    float total=0;
    int choice=1;
    printf("請選擇下列商品:\n");
    printf("1--紅茶(3.0元)\n");
    printf("2--可樂(2.5元)\n");
    printf("3--雪碧(2.5元)\n");
    printf("4--橙汁(3.0元)\n");
    printf("5--礦泉水(2.0元)\n");
    printf("0--退出\n");
    while(choice!=0)
    {
        printf("請輸入你選擇的商品序號:\n");
        scanf("%d",&order);
        printf("請輸入你要購買的數量:\n");
        scanf("%d",&number);
        switch(order)
    {   case 1:price=3.0;break;
        case 2:price=2.5;break;
        case 3:price=2.5;break;
        case 4:price=3.0;break;
        case 5:price=2.0;break;
        default:printf("輸入序號有誤\n");price=0;
    }
    total=price*number;
    printf("按0結束購買,其他鍵繼續購買\n");
    scanf("%d",&choice);
}
printf("你需要付款: %.2f\n",total);
return 0;
}

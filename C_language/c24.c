#include <stdio.h>
int main()
{
    int order;
    int number;
    float price;
    float total=0;
    int choice=1;
    printf("�п�ܤU�C�ӫ~:\n");
    printf("1--����(3.0��)\n");
    printf("2--�i��(2.5��)\n");
    printf("3--����(2.5��)\n");
    printf("4--���(3.0��)\n");
    printf("5--�q�u��(2.0��)\n");
    printf("0--�h�X\n");
    while(choice!=0)
    {
        printf("�п�J�A��ܪ��ӫ~�Ǹ�:\n");
        scanf("%d",&order);
        printf("�п�J�A�n�ʶR���ƶq:\n");
        scanf("%d",&number);
        switch(order)
    {   case 1:price=3.0;break;
        case 2:price=2.5;break;
        case 3:price=2.5;break;
        case 4:price=3.0;break;
        case 5:price=2.0;break;
        default:printf("��J�Ǹ����~\n");price=0;
    }
    total=price*number;
    printf("��0�����ʶR,��L���~���ʶR\n");
    scanf("%d",&choice);
}
printf("�A�ݭn�I��: %.2f\n",total);
return 0;
}

#include <stdio.h>
int main()
{
    int a,b;
    int result;
    int choice=1;
    printf("請輸入整數: \n");
    scanf("%d",&a);
    printf("請輸入整數: \n");
    scanf("%d",&b);
    result=a+b;
    printf("a+b=%d\n",result);
    result=a*b;
    printf("a*b=%d\n",result);
    result=a-b;
    printf("a-b=%d\n",result);
    {if(b!=0)
        printf("a/b=%d\n",result);
    else
        printf("除數不能為0!!\n");
    }
    printf("0--退出\n");
while(choice!=0)
{
    printf("請輸入整數: \n");
    scanf("%d",&a);
    printf("請輸入整數: \n");
    scanf("%d",&b);
    result=a+b;
    printf("a+b=%d\n",result);
    result=a*b;
    printf("a*b=%d\n",result);
    result=a-b;
    printf("a-b=%d\n",result);
    result=a/b;
    {if(b!=0)
        printf("a/b=%d\n",result);
    else
        printf("除數不能為0!!\n");
    }
    printf("0--退出\n");
    scanf("%d",&choice);
}
    return 0;
}

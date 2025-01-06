#include <stdio.h>
int main()
{
    int a,b;
    int result;
    printf("请输入整数: \n");
    scanf("%d",&a);
    printf("请输入整数: \n");
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
        printf("除数不能为整数!!\n");
    }
    printf("0--退出\n");
while(choice!=0)
{
    printf("请输入整数: \n");
    scanf("%d",&a);
    printf("请输入整数: \n");
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
        printf("除数不能为整数!!\n");
    }
    printf("0--退出\n");
}

    return 0;
}

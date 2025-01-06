#include <stdio.h>
int main()
{
    float a,b;
    float result;
    int choice=1;
	while(choice!=0)
{
    printf("请输入第一个数： \n");
    scanf("%f",&a);
    printf("请输入第二个数： \n");
    scanf("%f",&b);
    result=a+b;
    printf("a+b=%f\n",result);
    result=a*b;
    printf("a*b=%f\n",result);
    result=a-b;
    printf("a-b=%f\n",result);
    result=(double)a/b;
    {if(b!=0)
        printf("a/b=%f\n",result);
    else
        printf("除数不可为零!!\n");
    }
    printf("0--退出\n");
	printf("按其他键继续\n");
    scanf("%d",&choice);
}
    return 0;
}

#include <stdio.h>
int main()
{
    int a,b;
    int result;
    int choice=1;
    printf("�п�J���: \n");
    scanf("%d",&a);
    printf("�п�J���: \n");
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
        printf("���Ƥ��ର0!!\n");
    }
    printf("0--�h�X\n");
while(choice!=0)
{
    printf("�п�J���: \n");
    scanf("%d",&a);
    printf("�п�J���: \n");
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
        printf("���Ƥ��ର0!!\n");
    }
    printf("0--�h�X\n");
    scanf("%d",&choice);
}
    return 0;
}

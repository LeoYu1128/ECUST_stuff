#include <stdio.h>
int main()
{
    int count=0;
    char ch;
    printf("please input characters:");
    for(;(ch=getchar())!='\n';)
    {
        if(ch>='A'&&ch<='Z')
            count++;
    }
    printf("��%d�Ӥj�g�r��\n",count);
    return 0;
}

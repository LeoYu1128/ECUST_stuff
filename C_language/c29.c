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
    printf("¦³%d­Ó¤j¼g¦r²Å\n",count);
    return 0;
}

#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{

    printf("����Ҫ�ڎ�����P�C?");
    scanf("%d",&tshut);
    system("shutdown -s -t tshut");
    return 0;
}

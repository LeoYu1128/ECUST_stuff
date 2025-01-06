#include <stdio.h>
int main()
{
    int age;
    char sex;
    printf("請輸入你的年齡:\n");
    scanf("%2d,&age");
    printf("請輸入你的性別:\n");
    scanf("%c,&sex");
    printf("\n-------------------------\n");
    printf("\nage: %4d\tYour gender is: %4c\n",age,sex);
    return 0;
}

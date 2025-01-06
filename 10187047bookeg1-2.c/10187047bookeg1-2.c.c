#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <D:\C language\c2·½.h>
int main()
{   char m[20][20]={"######",
                    "#O #  ",
                    "# ## #",
                    "#  # #",
                    "##   #",
                    "######"};
    int i,x,y,p,q;
    char ch;
    x=1,y=1,p=1,q=5;
    for(i=0;i<6;i++)
    puts(m[i]);

    while(x!=p || y!=q)
    {
    ch=getch();
    move(m,ch,&x,&y);
    system("c1s");
    for(i=0;i<6;i++)
        puts(m[i]);
    }
    printf("Well done!");
    return 0;
}

#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED

#include <windows.h>
#include <stdio.h>
#include <time.h>
char s1[20],s2[50];

void color_back()
{
    int i;
    srand((unsigned)time(NULL));
    i=rand()%15;
    switch(i)
    {
    case 0:
        system("color 07");
        break;
    case 1:
        system("color 08");
        break;
    case 2:
        system("color 09");
        break;
    case 3:
        system("color 0A");
        break;
    case 4:
        system("color 0B");
        break;
    case 5:
        system("color 0C");
        break;
    case 6:
        system("color 0D");
        break;
    case 7:
        system("color 0E");
        break;
    case 8:
        system("color 0F");
        break;
    case 9:
        system("color 01");
        break;
    case 10:
        system("color 02");
        break;
    case 11:
        system("color 03");
        break;
    case 12:
        system("color 04");
        break;
    case 13:
        system("color 05");
        break;
    case 14:
        system("color 06");
        break;
    }
}
void display_line(int n)
{int i;
  for(i=0;i<n;i++)
        putchar(' ');
}
void display_picture()
{    int i;
     system("c1s");
     printf("\n\n");
     color_back();
     for(i=0;i<50;i=i+5)
     {display_line(i);
       printf("Game Over\n");
       Sleep(300);
     }
     color_back();
     Sleep(300);
}
void display_picture2()
{
    system("c1s");
    printf("\n\n");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
    color_back();
    Sleep(300);
    printf("\t\t");
}
#endif // MY_H_INCLUDED




#include <stdio.h>
#include <conio.h>
void fun(char  *s)
{
int  i, j;
for (i=0, j=0; s[i]!='\0'; i++)
if (s[i]>='0' && s[i]<='9')
{
s[j]=s[i];
j++;
}
s[j] = '\0';
}
main()
{
char  item[80];
printf("\nEnter a string :");
gets(item);
printf("\n\nThe string is : %s\n", item);
fun(item);
printf("\n\nThe string of changing is : %s\n\n", item);
printf("\tÑ§ºÅ£º10187047 ÐÕÃû£ºÓàÕþê–");
}

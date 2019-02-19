#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[30],b[20];
clrscr();
gets(s);
strcpy(b,s);
strrev(b);
if(strcmp(s,b)==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
char a1[20];
int i;
clrscr();
gets(a1);
for(i=0;a1[i]!='\0';i++)
{
if(a1[i]>='0' && a1[i]<='9')
{
printf("%c",a1[i]);
}
}
getch();
}

#include<stdio.h>
#include<string.h>
void main()
{
int l=0,i;
char a[100];
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=l-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}

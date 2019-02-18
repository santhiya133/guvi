#include<stdio.h>
#include<conio.h>
void main()
{
char b[20];
int i,count=0;
clrscr();
gets(b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]==' ')
{
count++;
}
}
printf("%d",count);
getch();
}

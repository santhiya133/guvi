#include<stdio.h>
#include<conio.h>
void main()
{
char a[30];
int i,des=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='0' || a[i]=='1')
{
des=0;
}
else
{
des=1;
break;
}
}
if(des==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

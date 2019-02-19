#include<stdio.h>
#include<conio.h>
void main()
{
int m,i,des=0;
clrscr();
scanf("%d",&m);
for(i=2;i<=m/2;i++)
{
if(m%i==0)
{
des=1;
break;
}
}
if(des==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}

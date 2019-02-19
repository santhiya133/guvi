#include<stdio.h>
#include<conio.h>
void main()
{
int m,i;
clrscr();
scanf("%d",&m);
for(i=1;i<=m;i++)
{
if(m%i==0)
{
printf(" %d",i);
}
}
getch();
}

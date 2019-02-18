#include<stdio.h>
#include<conio.h>
void main()
{
int n1,m1,d=0;
clrscr();
scanf("%d%d",&n1,&m1);
if(n1>m1)
{
d=n1-m1;
}
else
{
d=m1-n1;
}
if(d%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}

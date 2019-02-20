#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,max;
clrscr();
scanf("%d%d",&n,&n1);
if(n>n1)
{
max=n;
}
else
{
max=n1;
}
while(1)
{
if(max%n==0 && max%n1==0)
{
printf("%d",max);
break;
}
++max;
}
getch();
}

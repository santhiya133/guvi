#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,sum=0;
clrscr();
scanf("%d%d",&n,&m);
sum=n+m;
if(sum%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}

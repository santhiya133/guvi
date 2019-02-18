#include<stdio.h>
#include<conio.h>
void main()
{
int n1,m,p=0;
clrscr();
scanf("%d%d",&n1,&m);
p=n1*m;
if(p%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}

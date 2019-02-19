#include<stdio.h>
#include<conio.h>
void main()
{
int n,r1,m1=1;
clrscr();
scanf("%d",&n);
while(n)
{
r1=n%10;
m1=m1*r1;
n=n/10;
}
printf("%d",m1);
getch();
}

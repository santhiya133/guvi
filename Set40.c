#include<stdio.h>
#include<conio.h>
void main()
{
int m,a=0,b=1,c;
clrscr();
scanf("%d",&m);
printf("%d ",b);
while(m-1)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
m--;
}
getch();
}

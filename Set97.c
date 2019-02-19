#include<stdio.h>
#include<conio.h>
void main()
{
int n,r1,s1=0;
clrscr();
scanf("%d",&n);
while(n)
{
r1=n%10;
s1=s1*10+r1;
n=n/10;
}
printf("%d",s1);
getch();
}

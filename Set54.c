#include<stdio.h>
#include<conio.h>
void main()
{
int n1,s=0;
clrscr();
scanf("%d",&n1);
if(n1%2==0)
{
printf("%d",n1);
}
else if(n1%2!=0)
{
s=n1-1;
printf("%d",s);
}
getch();
}

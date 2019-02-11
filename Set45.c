#include<stdio.h>
#include<conio.h>
void main()
{
int n1,count=0;
clrscr();
scanf("%d",&n1);
while(n1)
{
n1=n1/10;
count++;
}
printf("%d",count);
getch();
}

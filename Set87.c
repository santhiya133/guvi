#include<stdio.h>
#include<conio.h>
void main()
{
int a1,b1;
clrscr();
scanf("%d%d",&a1,&b1);
while(a1!=b1)
{
if(a1>b1)
{
a1=a1-b1;
}
else
{
b1=b1-a1;
}
}
printf("%d",a1);
getch();
}

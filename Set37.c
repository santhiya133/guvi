#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp1;
clrscr();
scanf("%d%d",&a,&b);
temp1=a;
a=b;
b=temp1;
printf("%d %d",a,b);
getch();
}

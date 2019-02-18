#include<stdio.h>
#include<conio.h>
void main()
{
int n1,i;
clrscr();
scanf("%d",&n1);
for(i=n1;i<100;i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
getch();
}

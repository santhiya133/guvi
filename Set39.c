#include<stdio.h>
#include<conio.h>
void main()
{
int b[20],max,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
max=0;
for(i=0;i<n;i++)
{
if(b[i]>max)
{
max=alb[i];
}
}
printf("%d",max);
getch();
}

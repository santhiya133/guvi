#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n1,i,sum=0,avg=0;
clrscr();
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
sum=sum+a[i];
}
avg=sum/n1;
printf("%d",avg);
getch();
}

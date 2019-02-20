#include<stdio.h>
#include<conio.h>
void main()
{
int ar[20],i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
printf("%d %d",ar[i],i);
printf("\n");
}
getch();
}

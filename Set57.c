#include<stdio.h>
#include<conio.h>
void main()
{
int n1,k,a[30],count=0,i;
clrscr();
scanf("%d%d",&n1,&k);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
if(a[i]==k)
{
count++;
}
}
printf("%d",count);
getch();
}

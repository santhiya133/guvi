#include<stdio.h>
#include<conio.h>
void main()
{
int ar[20],i,j,temp,n,b;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ar[i]>ar[j])
{
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
}
}
b=n/2;
for(i=0;i<n;i++)
{
if(i==b)
{
printf("\n%d",ar[i]);
}
}
getch();
}

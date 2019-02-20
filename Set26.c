#include<stdio.h>
#include<conio.h>
void main()
{
int ar[20],i,j,temp,n;
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
for(i=0;i<n;i++)
{
printf("%d ",ar[i]);
}
getch();
}

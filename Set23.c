#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],min,i,n1;
clrscr();
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
scanf("%d",&arr[i]);
}
min=arr[0];
for(i=0;i<n1;i++)
{
if(arr[i]<min)
{
min=arr[i];
}
}
printf("%d",min);
getch();
}

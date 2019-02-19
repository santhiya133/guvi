#include<stdio.h>
#include<conio.h>
void main()
{
int s[20],k,n,i,j;
clrscr();
scanf("%d%d",&n,&k);
for(j=0;j<n;j++)
{
scanf("%d",&s[j]);
}
for(i=0;i<n;i++)
{
if(i==k-1)
{
printf("%d",s[i]);
}
}
getch();
}

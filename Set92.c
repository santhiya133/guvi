#include<stdio.h>
#include<conio.h>
void main()
{
int s[20],n,i,sum=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
sum+=s[i];
}
printf("%d",sum);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int s[20],n,i,j=1;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
if(s[i]!=j)
{
printf("%d",i);
break;
}
j++;
}
getch();
}

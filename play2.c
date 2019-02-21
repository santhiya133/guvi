#include<stdio.h>
void main()
{
int n,f=1,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}

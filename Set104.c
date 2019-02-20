#include<stdio.h>
#include<conio.h>
void main()
{
int m,k,s=1,i;
clrscr();
scanf("%d%d",&m,&k);
for(i=0;i<k;i++)
{
s=s*m;
}
printf("%d",s);
getch();
}

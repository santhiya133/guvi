#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,s1=0,des=0,i,b=0;
clrscr();
scanf("%d%d",&n,&m);
s1=n*m;
for(i=1;i<50;i++)
{
if(i*i==s1)
{
des=0;
break;
}
else
{
des=1;
}
}
if(des==0)
printf("yes");
else
printf("no");
getch();
}

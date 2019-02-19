#include<stdio.h>
#include<conio.h>
void main()
{
float m,k=0.1;
int a,i=0;
clrscr();
scanf("%f",&m);
for(i=0;i<9;i++)
{
a=(int)(m+k);
if(a>m)
{
printf("%d",a);
break;
}
else
{
k=k+0.1;
}
}
getch();
}

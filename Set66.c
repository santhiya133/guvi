#include<stdio.h>
#include<conio.h>
void main()
{
int n1,i,des=0;
scanf("%d",&n1);
for(i=2;i<=n1/2;i++)
{
if(n1%i==0)
{
des=1;
break;
}
}
if(des==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

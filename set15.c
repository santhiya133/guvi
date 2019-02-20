#include<stdio.h>
int main()
{
int n1,q1,i=0;
scanf("%d%d",&n1,&q1);
for(i=n1+1;i<q1;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
getch();
return 0;
}

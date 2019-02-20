#include<stdio.h>
int main()
{
int n,q,i=0;
scanf("%d%d",&n,&q);
for(i=n+1;i<q;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
getch();
return 0;
}

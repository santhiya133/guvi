#include<stdio.h>
int main()
{
int n,r,sum=0,n1;
scanf("%d",&n);
n1=n;
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(n1==sum)
{
printf("yes");
}
else
{
printf("no");
}
getch();
return 0;
}

#include<stdio.h>
int main()
{
int c1=0,n,n1,n2,rem=0,sum=1,c=0,s=0;
scanf("%d",&n);
n1=n;
n2=n;
while(n1!=0)
{
c1++;
n1=n1/10;
}
while(n!=0)
{
c=c1;
rem=n%10;
while(c!=0)
{
sum=rem*sum;
c--;
}
s=s+sum;
n=n/10;
sum=1;
rem=0;
c=0;
}
if(s==n2)
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

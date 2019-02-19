#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0,a[20],i=0,temp=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
if(rem%2!=0)
{
a[i]=rem;
i++;
}
n=n/10;
}
temp=i;
a[i]='\0';
for(i=temp-1;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}

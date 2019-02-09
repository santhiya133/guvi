#include<stdio.h>
#include<conio.h>
void main()
{
int j=0,n,a,b[10],i=0;
clrscr();
scanf("%d",&n);
while(n!=0)
{
a=n%10;
b[i]=a;
i++;
n=n/10;
}
for(j=i-1;j>=0;j++)
{
printf("%d",b[j]);
}
getch();
}

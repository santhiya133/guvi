#include<stdio.h>
int main()
{
int j,i,a,b;
scanf("%d%d",&a,&b);
for(j=a;j<=b;j++)
{
for(i=2;i<j/2;i++)
{
if(j%i!=0)
{
printf("%d",j);
break;
}
}
}
getch();
return 0;
}


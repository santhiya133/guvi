#include<stdio.h>
int main()
{
int n;
clrscr();
scanf("%d",&n);
if(n==0)
{
printf("zero");
}
if(n<0)
{
printf("negative");
}
if(n>0)
{
printf("positive");
}
getch();
return 0;
}

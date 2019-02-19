#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0;    
clrscr();
scanf("%d%d%d",&a,&b,&c);
sum=(c/2)*((2*a)+(c-1)*b);
printf("%d",sum);
getch();
}

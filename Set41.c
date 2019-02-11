#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int n1;
clrscr();
scanf("%d",&n1);
gets(a);
while(n1)
{
printf("%s",a);
n1--;
}
getch();
}

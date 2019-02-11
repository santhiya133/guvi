#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int l,l2;
clrscr();
gets(a);
gets(b);
l=strlen(a);
l2=strlen(b);
if(l>l2)
{
printf("%s",a);
}
else if(l<l2)
{
printf("%s",b);
}
else
{
printf("%s",b);
}
getch();
}

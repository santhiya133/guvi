#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i=0,l=0;
clrscr();
gets(a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(a[i]=='\0')
{
a[i]='.';
}
}
printf("%s",a);
getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char b[30];
int i,count=0,n;
clrscr();
scanf("%[^\t\n]s",b);
n=strlen(b);
for(i=0;i<n;i++)
{
if(b[i]>='0' && b[i]<='9')
{
count++;
}
}
printf("%d",count);
getch();
}

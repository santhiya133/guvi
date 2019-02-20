#include<stdio.h>
#include<conio.h>
void main()
{
char ar[20];
int i,des=0;
clrscr();
gets(ar);
for(i=0;ar[i]!='\0';i++)
{
if(ar[i]>='a' && ar[i]<='z' || a[i]>='A' && a[i]<='Z')
{
des=0;
}
else
{
des=1;
break;
}
}
if(des==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i=0,cou=0,des=0;
clrscr();
gets(str);
while(str[i]!='\0')
{
i++;
cou++;
}
for(i=0;i<cou;i++)
{
if(str[i]>='a' && str[i]<='z')
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
printf("yes");
}
else
{
printf("no");
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int i=0,cou=0,;
clrscr();
gets(s);
while(s[i]!='\0')
{
i++;
cou++;
}
if(cou%2==0)
{
s[cou/2]='*';
s[(cou/2)-1]='*';
}
else
{
s[cou/2]='*';
}
for(i=0;i<cou;i++)
{
printf("%c",[i]);
}
getch();
}

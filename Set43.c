#include<stdio.h>
#include<conio.h>
void main()
{
char s[20],s2[20];
int i,j;
clrscr();
gets(s);
gets(s2);
for(i=0;s[i]!='\0';++i);
for(j=0;s2[j]!='\0';++j,++i)
{
s[i]=s2[j];
}
s[i]='\0';
printf("%s",s);
getch();
}

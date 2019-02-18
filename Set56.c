#include<stdio.h>
#include<conio.h>
void main()
{
char a[300];
int i=0,cou=0,des=0;
clrscr();
gets(a);
while(a[i]!='\0')
{
i++;
cou++;
}
for(i=0;i<cou;i++)
{
if((a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')&&(a[i]>=47 && a[i]<=56))
{
des=0;
}
else if(a[i]=='_')
{
des=1;
break;
}
}
if(des==1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}

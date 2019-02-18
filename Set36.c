#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int calpha,cdigit,cspecial,cspace;
int i;
cdigit=calpha=cspecial=cspace=0;
printf("enter a string");
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]>='0' && s[i]<='9')
cdigit++;
else if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
calpha++;
else if(s[i]==' ')
cspace++;
else
cspecial++;
}
printf("%d",cspecial);
getch();
}

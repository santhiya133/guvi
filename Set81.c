#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,t,i=0,s[20];
clrscr();
printf("enter no of num sets:");
scanf("%d",&t);
while(t)
{
scanf("%d%d",&a,&b);
if(a<b)
{
c=b-a;
}
else if(a>b)
{
c=a-b;
}
s[i]=c;
i++;
t--;
}
s[i]='\0';
for(i=0;s[i]!='\0';i++)
{
printf("%d",s[i]);
printf("\n");
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,str,t=0,d[20],i=0;
clrscr();
scanf("%d",&t);
while(t)
{
scanf("%d %c %d",&a,&str,&b);
if(str='/')
{
d[i]=a/b;
}
else
{
d[i]=a%b;
}
i++;
t--;
}
d[i]='\0';
for(i=0;d[i]!='\0';i++)
{
printf("%d",d[i]);
printf("\n");
}
getch();
}

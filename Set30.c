#include<stdio.h>
#include<conio.h>
void main()
{
int hr1,h2,mi1,m2,h3,m3;
clrscr();
scanf("%d%d",&hr1,&mi1);
scanf("%d%d",&h2,&m2);
if(hr1>h2 && mi1>m2)
{
h3=hr1-h2;
m3=mi1-m2;
}
else if(hr1<h2 && mi1<m2)
{
h3=h2-hr1;
m3=m2-mi1;
}
else if(hr1>h2 && mi1==m2)
{
h3=hr1-h2;
m3=0;
}
else if(hr1<h2 && mi1==m2)
{
h3=h2-hr1;
m3=0;
}
printf("%d %d",h3,m3);
getch();
}

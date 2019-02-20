#include<stdio.h>
#include<conio.h>
void main()
{
char a1[20],b1[20];
int i,j=0;
clrscr();
gets(a1);
for(i=0;a1[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c",a1[i]);
}
else
{
b1[j]=a1[i];
j++;
}
b1[j]='\0';
for(j=0;b1[j]!='\0';j++)
{
printf("%c",b[j]);
}
getch();
}

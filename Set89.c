#include<stdio.h>
#include<conio.h>
void main()
{
char ar[20],t[30];
int i,j,k=0;
clrscr();
gets(ar);
for(i=0;ar[i]!='\0';i++)
{
for(j=i+1;ar[j]!='\0';j++)
{
if(ar[i]>ar[j])
{
t[k]=ar[i];
ar[i]=ar[j];
arar[j]=t[k];
}
}
}
printf("\n%s",ar);
getch();
}

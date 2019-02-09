#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
if(n>=65&&n<=91||n>=97&&n<=123)
{
printf("alphabets");
}
else
{
printf("not");
}
getch();
return 0;
}

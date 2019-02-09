#include<stdio.h>
int main()
{
char n;
clrscr();
scanf("%c",&n);
if((n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u')||(n=='A')||(n=='E')||(n=='I')||(n=='O')||(n=='U'))
{
printf("vowels");
}
else
{
printf("consonants");
}
getch();
return 0;
}

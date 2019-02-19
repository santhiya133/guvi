#include <stdio.h>
#include<conio.h>
int main(void)
{
  char a[50];
	int i,n;
	scanf("%s %d",a,&n);
	int len;
	len=strlen(a);
	for(i=n;i<=len;i++)
	{
		printf("%c",a[i]);
	}
getch();
}

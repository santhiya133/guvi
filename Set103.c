#include <stdio.h>
#include<conio.h>
int main(void)
 {
	char a[50];
	int i=0,n;
	scanf("%[^\n]s",a);
	n=strlen(a);
  for(i=0;a[i]!='\0';i++)
	{
		if(i==0)
			[i]=toupper(a[i]);
		if(a[i]==' ')
			[i+1]=toupper(a[i+1]);
	}
	printf("\n%s",a);
	getch();
}

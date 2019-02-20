#include<stdio.h>
#include<conio.h>
void main()
{
int min,hr,m,se;
printf("enter min:");
scanf("%d",&min);
hr=(min/3600);
m=(min-(3600*hr))/60;
se=(min-(3600*hr)-(m*60));
printf("h:m:s-%d:%d:%d\n",hr,m,se);
getch();
}

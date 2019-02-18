#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int n,num2;
clrscr();
scanf("%d%d",&n,&num2);
swap(&n,&num2);
printf("%d %d",n,num2);
getch();
}
void swap(int *x,int *y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}

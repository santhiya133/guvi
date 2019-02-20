#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],k,i,j,tem,n,b[30],t=0;
   printf("Enter The length Of The Array ");
  scanf("%d%d",&n,&k);
  printf("\nEnter The Numbers:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
   }
 for(i=0;i<n;i++)
    {
     for(j=0;j<n-1;j++)
      {
       if(a[j]>a[j+1])
        {
         tem=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         }
        }
     }
   for(i=0;i<n;i++)
   {
    if(a[i]%2!=0)
    {
    b[t]=a[i];
    t++;
    }
   }
   b[t]='\0';
  for(t=0;b[t]!='\0';t++)
  {
      if(t==k-1)
      {
          printf("%d",b[t]);
      }
  }
   return 0;
}

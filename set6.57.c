#include <stdio.h>

int main()
{
 int n,k,c=0,a[10],i;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for (i=0;i<n;i++)
 {
     if(a[i]==k)
     {
         c++;
     }
     
 }
 printf("%d",c);
 return 0;
}

#include<stdio.h>
int main()
{
    int n1,p=1,i,flag=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        p=2*p;
    
    if(n1==p)
    {
        flag=1;
    }
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    
    
    return 0;
}

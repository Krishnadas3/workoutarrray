#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=10,a[100]={1,2,3,-3,-4,-5,-6,-6,-3},count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            count++;
        }
        
        }
printf("%d",count);
}
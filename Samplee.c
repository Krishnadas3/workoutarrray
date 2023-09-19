#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n=10,a[100]={1,2,3,4,5,6,7,8,9,10},flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1 && a[i]>1 )
        {
             for ( j = i; j < n; j++)
             {
                a[j+1]=a[j+3];
                a[j+2]=a[j+4];
             }
          n=n-2;    
       }
}
for ( i = 0; i < n; i++)
{
     printf("%d",a[i]);
}

}
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a[100]={1,2,3,4,2,5,6,7,2,8},value=-1,n=10,count,i,j,m[n],b[100];
     for(i=0;i<n;i++)
     {
          count=1;
          for(j=i+1;j<n;j++)
          {
               if(a[i]==a[j])
               {
                    count++;
                    m[j]=value;
               }
          }
          if(m[i]!=value)
          {
               m[i]=value;
          }
          for(i=0;i<n;i++)
          {
               if(m[i]!=value)
               {
                    printf("%d-%d",a[i],b[i]);
               }
          }
     }
}
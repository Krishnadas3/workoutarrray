#include <stdio.h>
void main()
{
     int i,j,num,a[100],temp,count=0;
     printf("enter array limit");
     scanf("%d",&num);
     printf("enter array elements ");
     for ( i = 0; i < num; i++)
     {
         scanf("%d",&a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          for ( j = i+1; j < num; j++)
          {
               if (a[i]<a[j])
               {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
               
          }
          printf("\n sorted array %d",a[i]);
          
     }
     for ( i = 0; i < num; i++)
     {
          if (a[i]==1)
          {
               count++;
          
          }
          
     }
     printf("\ncount of 1 :%d",count);
}
     
     

     

     
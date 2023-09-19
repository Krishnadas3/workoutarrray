#include <stdio.h>
void main()
{
     int i,num,a[200],j;
     printf("enter arry limit ");
     scanf("%d",&num);
     printf("enter array limit ");
     for ( i = 0; i < num; i++)
     {
          scanf("%d",&a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          if (a[i]%5==0)
          {
               for ( j = i; j < num; j++)
               {
                    a[j+1]=a[j+3];
                    a[j+2]=a[j+4];
               }
              num=num-2; 
          }
          
     }
     printf("resulant array is : ");
     for ( i = 0; i < num; i++)
          {
               printf("   %d",a[i]);
          }
          
     }
     
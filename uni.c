#include <stdio.h>
void main()
{
     int i,j,flag,num,a[100];
     printf("enter arary limit");
     scanf("%d",&num);
     printf("enter array values");
     for ( i = 0; i < num; i++)
     {
          scanf("%d",&a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          flag=0;
          for ( j = 0; j < num; j++)
          {
               if (i!=j)
               {
                    if (a[i]==a[j])
                    {
                         flag=1;
                         break;
                    }
                    
               }
               
          }
          if (flag==0)
          {
               printf("%d",a[i]);
          }
          
          
     }
     
     
}
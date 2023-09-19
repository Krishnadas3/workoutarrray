#include <stdio.h>
void main()
{
     int i, num, a[100],j,k;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          for ( j = i+1; j < num; j++)
          {
               if (a[i]==a[j])
               {
                    for ( k = i; k < num; k++)
                    {
                         a[k]=a[k+1];
                    }
                    num--;
                    i--;
                    
               }
               
          }
          
     }
     for ( i = 0; i < num; i++)
     {
          printf("%d",a[i]);
     }
     
     
}
#include <stdio.h>
void main()
{
     int i,j, num, a[100],sum=0;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          if (a[i]%2==1)
          {
               for ( j = i; j < num; j++)
               {
                    a[j]=a[j+1];
               }
              num--;
              i--; 
          }
          else
          {
               sum=sum+a[i];
          }
     }
     
          printf("%d",sum);
     
}
     
          
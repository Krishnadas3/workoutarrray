#include <stdio.h>
void main()
{
     int i, j, num, a[100], count = 0, temp;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array elelments");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num ; i++)
     {
          for (j = i + 1; j < num; j++)
          {
               if (a[i] > a[j])
               {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
          printf("\nsorted values  %d",a[i]);
     }
     // for ( i = 0; i < num; i++)
     // {
     //      if (a[i]==1)
     //      {
     //           count++;
               
     //      }
          
     // }
     // printf("\ncount of = %d",count);
}
     
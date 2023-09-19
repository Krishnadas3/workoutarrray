#include <stdio.h>
void main()
{
     int i, num, a[300], even = 0, odd = 0, sum = 0;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array elements ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 0)
          {
               {
                    for (i = 0; i < num; i++)
                    {
                         if (a[i] % 4 != 0)
                         {
                              if (a[i] % 2 == 0)
                              {
                                   sum = sum + a[i];
                              }
                         }
                    }
                    printf("even numbers sum = %d", sum);
               }
          }
     }
}

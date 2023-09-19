#include <stdio.h>
void main()
{
     int i, j, num = 10, a[100] = {1,1,5,6,7,3,9,1,2,3};
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 0)
          {
               for (j = i; j < num; j++)
               {
                    a[j + 1] = a[j + 3];
                    a[j + 2] = a[j + 4];
               }
               num = num - 2;
          }
     }
     printf("resulant array is ");
     for (i = 0; i < num; i++)
     {
          printf("%d", a[i]);
     }
}

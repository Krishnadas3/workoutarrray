#include <stdio.h>
void main()
{
     int i, j, num, a[100];
     printf("enter array size");
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
               for (j = i; j < num; j++)
               {
                    a[j] = a[j + 1];
               }
               num--;
               i--;
          }
     }
     for (i = 0; i < num; i++)
     {
          printf("%d", a[i]);
     }
}

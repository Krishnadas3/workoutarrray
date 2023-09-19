#include <stdio.h>
void main()
{
     int i, j, num, a[100], k;
     printf("\n enter array limit ");
     scanf("%d", &num);
     printf("\n enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          for (j = i + 1; j < num; j++)
          {
               if (a[i] == a[j])
               {
                    for (k = i; k < num; k++)
                    {
                         a[k] = a[k + 1];
                    }

                    num--;
                    j--;
               }
          }
     }
     for (i = 0; i < num; i++)
     {
          printf("%d", a[i]);
     }
}

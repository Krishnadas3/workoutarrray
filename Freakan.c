#include <stdio.h>
void main()
{
     int i, j, num, a[100], freq[100], count, b[100];
     printf("enter array limtit ");
     scanf("%d", &num);
     printf("enter array elements ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }

     for (i = 0; i < num; i++)
     {
          count = 1;
          for (j = i + 1; j < num; j++)
          {
               if (a[i] == a[j])
               {
                    count++;
                    a[j] = -1;
               }
          }
          b[i] = count;
     }

     for (i = 0; i < num; i++)
     {
          if (a[i] != -1)
          {
               printf("\n%dis%d", a[i], b[i]);
          }
     }
}
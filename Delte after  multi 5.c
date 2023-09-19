#include <stdio.h>
void main()
{
     int i, j, num, a[200], k = 0;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          a[k++] = a[i];
          if (a[i] % 5 == 0)
          {
               i = i + 2;
               continue;
          }
     }
     for (i = 0; i < k; i++)
     {
          printf("%d", a[i]);
     }
}

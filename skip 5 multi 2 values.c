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
          if (a[i] % 5 == 0)
          {
                printf("%d", a[i]);
               i = i + 2;
          }
          else
          {
               printf("%d", a[i]);
          }
     }
}

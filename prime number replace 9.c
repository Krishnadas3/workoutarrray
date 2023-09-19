#include <stdio.h>
void main()
{
     int i, j, a[200], num, flag;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          flag = 0;
          for (j = 2; j < a[i]; j++)
          {
               if (a[i] % j == 0)
               {
                    flag = 1;
                    break;
               }
          }
          if (flag == 0 && a[i] > 1)
          {
               if (a[i] % 2 == 0)
               {
                    printf("even no %d\n", a[i]);
               }
          }
     }
}
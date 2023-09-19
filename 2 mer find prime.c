#include <stdio.h>
void mai()
{
     int i, j, num1, num2, a[100], b[100], c[100], flag;
     printf("\n enter first array limit ");
     scanf("%d", &num1);
     printf("\n enter first array values");
     for (i = 0; i < num1; i++)
     {
          scanf("%d", &a[i]);
          c[i] = a[i];
     }
     printf("\n enter second array limit ");
     scanf("%d", &num2);
     printf("\n enter second array values ");
     for (i = 0; i < num2; i++)
     {
          scanf("%d", &b[i]);
          c[num1 + i] = b[i];
     } 
     for (i = 0; i < num1 + num2; i++)
     {
          flag = 0;
          for (j = 2; j < c[i]; j++)
          {
               if (c[i] % j == 0)
               {
                    flag = 1;
                    break;
               }
          }
     }
     if (flag = 0 && c[i] > 1)
     {
          printf("%d", c[i]);
     }
}
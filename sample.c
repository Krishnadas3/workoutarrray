#include <stdio.h>
void main()
{
     int i, num, j, a[100], flag, count = 0, temp;
     printf("enter array size");
     scanf("%d", &num);
     printf("enter values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num - 1; i++)
     {
          for (j = i + 1; j < num; j++)
          {
               if (a[i] < a[j])
               {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     }
     for (i = 0; i < num; i++)
     {
          flag = 0;
          for (j = 0; j < num; j++)
          {
               if (i != j)
               {
                    if (a[i] == a[j])
                    {
                         flag = 1;
                         break;
                    }
               }
          }
          if (flag == 0)
          {
               count++;
          }
     }

     printf("%d", count);
}
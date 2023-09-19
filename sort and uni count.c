#include <stdio.h>
void main()
{
     int i, j, num, a[100], flag, count = 0, temp;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array elelments");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num ; i++)
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
          printf(" %d", a[i]);
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
     printf("your counted number are : %d", count);
}

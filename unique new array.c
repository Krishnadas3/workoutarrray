#include <stdio.h>
void main()
{
     int i, j, num, a[100], flag, c[100];
     float avg;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array elelments");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
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
               printf(" \n%d", a[i]);
          }
     }
}
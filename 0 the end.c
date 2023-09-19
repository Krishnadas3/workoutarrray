#include <stdio.h>
void main()
{
     int i, num, j, a[100], temp;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter arryay elements ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          for (j = i + 1; j < num; j++)
          {
               if (a[i] == 0)
               {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     }
     for (i = 0; i < num; i++)
     {
          printf(" %d", a[i]);
     }
}
#include <stdio.h>
void main()
{
     int i, num, a[100], flag, j,k;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");

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
          if (flag == 1 && a[i] > 1)
          {
               for (k = i; k < num; k++)
               {
                    a[k + 1] = a[k + 3];
                    a[k + 2] = a[k + 4];
               }
               num = num - 2;
          }
     }
     for ( i = 0; i < num; i++)
     {
          printf("%d",a[i]);
     }
     
}
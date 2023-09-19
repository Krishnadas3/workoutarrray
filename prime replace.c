#include <stdio.h>
void main()
{
     int i, j,a[100], num, flag;
     printf("enter array size");
     scanf("%d", &num);
     printf("enter array elements ");
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
               a[i] = 0;
          }
           printf(" %d\n", a[i]);
     }
    
}

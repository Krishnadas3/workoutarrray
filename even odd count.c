#include <stdio.h>
void main()
{
     int i, j, num, a[100],odd=0,even=0;
     printf("\n enter array limit ");
     scanf("%d", &num);
     printf("\n enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 0)
          {
               even++;
          }
          // else
          // {
          //      odd++;
          // }
     }
     printf(" even = %d", even);
     printf("odd = %d", odd);
}
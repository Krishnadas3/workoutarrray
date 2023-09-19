#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i, num, a[100], count = 0, temp;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num / 2; i++)
     {
          temp = a[i];
          a[i] = a[num - 1 - i];
          a[num - 1 - i] = temp;
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 0)
          {
               count++;
          }
     }
     printf("%d", count);
}

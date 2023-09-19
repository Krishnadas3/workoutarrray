#include <stdio.h>
void main()
{
     int i, num, a[200], flag, j, l1;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     l1 = a[0];
     for (i = 0; i < num; i++)
     {
          if (a[i] < l1)
          {
               l1 = a[i];
          }
          for (j = i; j < num; j++)
          {
               a[j] = a[j + 1];
          }
          i--;
          num--;
     }
     for (i = 0; i < num; i++)
     {
          printf("%d", a[i]);
     }
}
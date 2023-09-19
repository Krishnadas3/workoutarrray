#include <stdio.h>
void main()
{
     int i, num, a[100];
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {{
          if (a[i] % 6 == 0)
          {
               a[i] = a[i + 1];
          }
          num--;
          i--;
       }
     }
     printf("delete multiple of 6");
     for (i = 0; i < num; i++)
     {
          printf("%d", a[i]);
     }
}
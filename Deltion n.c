#include <stdio.h>
void main()
{
     int i, num, a[100], pos;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("enter whicn postion");
     {
          scanf("%d", &pos);
     }
     if (pos > num + 1)
     {
          printf("deltion wrong");
     }
     else
     {
          for (i = pos - 1; i < num - 1; i++)
          {
               a[i] = a[i + 1];
          }
     }
     for (i = 0; i < num - 1; i++)
     {
          printf("%d", a[i]);
     }
}

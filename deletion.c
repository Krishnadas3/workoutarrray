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
     printf("which pos you want delete");
     scanf("%d", &pos);
     if (pos >= num + 1)
     {
          printf("deletion not possible");
     }
     else
     {
          for (i = pos - 1; i < num - 1; i++)
          {
               a[i] = a[i + 1];
          }
          printf("resultant array is ");
          for (i = 0; i < num - 1; i++)
          {
               printf("%d", a[i]);
          }
     }
}

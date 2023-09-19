#include <stdio.h>
void main()
{
     int i, num, a[100], j, k, pos;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("Enter position of element you want to delete");
     scanf("%d", &pos);
     if (pos > num || pos < 1)
     {
          printf("Deletion not possible");
     }
     else

          for (i = pos - 1; i < num - 1; i++)
          {
               a[i] = a[i + 1];
          }

     printf("Resultant array:\n");
     for (i = 0; i < num - 1; i++)
     {
          printf("%d\t", a[i]);
     }
}
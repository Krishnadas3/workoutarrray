#include <stdio.h>
void main()
{
     int a[30], i, num, sm, j;
     printf("\nEnter no of elements :");
     scanf("%d", &num);

     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     sm = a[0];
     for (i = 0; i < num; i++)
     {
          if (a[i] < sm)
          {
               sm = a[i];
          }
     }
     printf("%d", sm);
}

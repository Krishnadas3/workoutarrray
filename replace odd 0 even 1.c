#include <stdio.h>
void main()
{
     int i, num, a[100], j, k;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 3 == 0)
          {
               a[i] = 1;
          }
         else if (a[i]%5==0)
          {
               a[i]=0;
          }
          
          printf("%d",a[i]);
}
}

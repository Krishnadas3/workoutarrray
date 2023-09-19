#include <stdio.h>
void main()
{
     int i, j, num, a[100],sum=0;
     printf("enter array size");
     scanf("%d", &num);
     printf("enter array elements ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 1)
          {
               for (j = i; j < num; j++)
               {
                    a[j] = a[j + 1];
               }
               num--;
               i--;
          }
     }
     for (i = 0; i < num; i++)
     {
         sum=sum+a[i];
     }
     printf("%d",sum);
}

#include <stdio.h>
void main()
{
     int i, j, num, a[100], temp, count = 0;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array elements ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          for (j = i + 1; j < num; j++)
          {
               if (a[i] > a[j])
               {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
          printf("%d", a[i]);
     }
     
     // for ( i = 0; i < num; i++)
     // {
     //      if (a[i]==0)
     //      {
     //           count++;
     //      }
          
     // }
     // printf("\nno of 0 =%d",count);
     
}
#include <stdio.h>
void main()
{
     int i, j, num, a[100], count = 0, temp, sum = 0;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array elelments");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num - 1; i++)
     {
          for (j = i + 1; j < num; j++)
          {
               if (a[i] < a[j])
               {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 0)
          {
               printf("  %d", a[i]);
               sum=sum+a[i];
          }
           
           
     }
     printf("sum of the array is : %d",sum);
}

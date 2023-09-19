#include <stdio.h>
void main()
{
     int i, j, num, a[100], temp,count;
     printf("enter array elements ");
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
          for ( i = 0; i < num; i++)
          {
               if (a[i]==1)
               {
                   count++;
               }
               
          }
          
     }
     printf("no of 1 in an array = %d",count);
}
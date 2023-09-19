#include <stdio.h>
void main()
{
     int i, num, a[200], even[100], odd[100], j=0, k=0;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          if (a[i] % 2 == 0)
          {
               even[j] = a[i];
               j++;
          }
          else
          {
               odd[k] = a[i];
               k++;
          }
     }
     for (i = 0; i < j; i++)
     {
          printf("even num is : %d\n", even[i]);
     }
     for (i = 0; i < k; i++)
     {
          printf("odd num is %d\n", odd[i]);
     }
}

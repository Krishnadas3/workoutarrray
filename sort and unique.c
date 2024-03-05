#include <stdio.h>
void main()
{
     int i, j, num, a[100], flag, temp,count=0;
     printf("enter array limit");
     scanf("%d", &num);
     printf("enter array elelments");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num ; i++)
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
     printf("\n %d\n",a[i]);
     }
}
     
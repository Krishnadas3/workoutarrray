#include <stdio.h>
void main()
{
     int i, j, num, a[100], flag, count = 0;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          flag = 0;
          for (j = 2; j < a[i]; j++)
          {
               if (a[i] % j == 0 )
               {
                    flag = 1;
                    break;
               }
          }
          if (flag == 0 && a[i] > 1)
          {
               printf("%d",a[i]);
          }
         
     }
      
     
     
}
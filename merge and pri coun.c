#include <stdio.h>
void main()
{
     int i, j, a[100], b[100], num1, num2, c[200], count = 0, flag;
     printf("\nenter first array limit ");
     scanf("%d", &num1);
     printf("\nenter first array elements ");
     for (i = 0; i < num1; i++)
     {
          scanf("%d", &a[i]);
          c[i] = a[i];
     }
     printf("\n enter second array limit ");
     scanf("%d", &num2);
     printf("\nenter second array elements");
     for (i = 0; i < num2; i++)
     {
          scanf("%d", &b[i]);
          c[num1 + i] = b[i];
     }
     for (i = 0; i < num1 + num2; i++)
     {
          flag = 0 ;
          for (j = 2; j < c[i]; j++)
          {
               if (a[i] % j == 0)
               {
                    flag = 1;
                    break;
               }
          }
          if (flag == 0)
          {
               count++;
          }
     }
     printf("\nprime no in this array is :%d",count);
}
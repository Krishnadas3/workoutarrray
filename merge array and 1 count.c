#include <stdio.h>
void main()
{
     int i, num, a[100], b[100], c[200], num1, num2, count = 0;
     printf("enter array count");
     scanf("%d", &num1);
     printf("enter array elements");
     for (i = 0; i < num1; i++)
     {
          scanf("%d", &a[i]);
          c[i] = a[i];
     }
     printf("enter 2nd array count");
     scanf("%d", &num2);
     printf("enter array elements");
     for (i = 0; i < num2; i++)
     {
          scanf("%d", &b[i]);
          c[num1 + i] = b[i];
     }
     for (i = 0; i < num1 + num2; i++)
     {
          printf("\n %d", c[i]);
     }
     for ( i = 0; i < num1+num2; i++)
     {
          if (c[i]==1)
          {
               count++;
          }
          
     }
     printf("\n count = %d",count);
     
}

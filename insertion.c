#include <stdio.h>
int main()
{
     int a[100];
     int n, i, pos, num;
     printf("Enter the size:");
     scanf("%d", &n);
     printf("Enter the numbers:\n");
     for (i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("Array numbers are:");
     // for (i = 0; i < n; i++)
     // {
     //      printf("%d ", a[i]);
     // }
     // printf("\n");
     printf("Enter the position of number you want to add:");
     scanf("%d", &pos);
     printf("Enter the number to add:");
     scanf("%d", &num);

     for (i = n - 1; i >= pos - 1; i--)
     {
          a[i + 1] = a[i];
          a[i] = num;
     }
     printf("Array numbers are:");
     for (i = 0; i < n + 1; i++)
     {

          printf("%d ", a[i]);
     }

     return 0;
}

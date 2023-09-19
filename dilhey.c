#include <stdio.h>

int main()
{
     int arr[100], n, i, j, k;

     printf("Enter the size of the array: ");
     scanf("%d", &n);

     printf("Enter the array elements:\n");
     for (i = 0; i < n; i++)
     {
          scanf("%d", &arr[i]);
     }

     for (i = 0; i < n; i++)
     {
          if (arr[i] % 2 == 0)
          {
               for (j = i + 1; j < n; j++)
               {
                    if (arr[j] % 2 != 0)
                    {
                         break;
                    }
               }
               if (j < n)
               {
                    for (k = j + 1; k < n; k++)
                    {
                         arr[k - 2] = arr[k];
                    }
                    n -= 2;
                    i--;
               }
          }
     }

     printf("Array after deleting two values next to an even number:\n");
     for (i = 0; i < n; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");

     return 0;
}
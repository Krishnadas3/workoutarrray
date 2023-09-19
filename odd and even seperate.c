#include <stdio.h>
void main()
{
     int n, i, a[100], even[100], odd[100], j = 0, k = 0;
     printf("enter size of array");
     scanf("%d", &n);
     printf("enter values in array");
     for (i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < n; i++)
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
     printf("Array of even numbers is:\n");
     for (i = 0; i < j; i++)
     {
          printf("%d\t", even[i]);
     }
     printf("\nArray of odd numbers is:\n");
     for (i = 0; i < k; i++)
     {
          printf("%d\t", odd[i]);
     }
     
}

// #include <stdio.h>

// int main()
// {
//     int num, i, j, flag, a[500], prime[100], mult[100], primeCount = 0, multCount = 0;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &num);
    
//     printf("Enter array values: ");
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (i = 0; i < num; i++)
//     {
//         flag = 0;
        
//         for (j = 2; j < a[i]; j++)
//         {
//             if (a[i] % j == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
        
//         if (flag == 0 && a[i] > 1)
//         {
//             prime[primeCount] = a[i];
//             primeCount++;
//         }
//         else if (a[i] % 5 == 0)
//         {
//             mult[multCount] = a[i];
//             multCount++;
//         }
//     }
    
//     printf("Prime numbers: ");
//     for (i = 0; i < primeCount; i++)
//     {
//         printf("%d ", prime[i]);
//     }
    
//     printf("\nMultiples of 5: ");
//     for (i = 0; i < multCount; i++)
//     {
//         printf("%d ", mult[i]);
//     }
    
//     return 0;
// }

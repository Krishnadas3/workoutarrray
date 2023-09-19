#include <stdio.h>
void main()
{
    int i, num, a[300], even[100], odd[100], j=0, k=0;
    printf("enter array limit ");
    scanf("%d", &num);
    printf("enter array elements ");
    for ( i = 0; i < num; i++)
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
    printf("\narray of even numbers are =");
    for (i = 0; i < j; i++)
    {
        printf(" %d\t", even[i]);
    }
    printf("\narray of odd numbers are =");
    for ( i = 0; i < k; i++)
    {
        printf(" %d\t", odd[i]);
    }
    
}

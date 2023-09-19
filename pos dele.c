#include <stdio.h>
void main()
{
    int n, i, a[100], pos;
    printf("enter size of array");
    scanf("%d", &n);
    printf("enter values in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position of element you want to delete");
    scanf("%d", &pos);
    if (pos > n || pos < 1)
    {
        printf("Deletion not possible");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
    }
    printf("Resultant array:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\t", a[i]);
    }
}
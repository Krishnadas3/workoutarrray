#include <stdio.h>

int main()
{
    int i, num, a[100];
    
    printf("Enter number ");
    scanf("%d", &num);

    printf("Enter the array values: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Array values: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
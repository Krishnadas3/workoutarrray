#include <stdio.h>

int main()
{
    int i, num, j, temp, a[100];
    printf("Enter array limit: ");
    scanf("%d", &num);
    printf("Enter array elements: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    j=num-1;
    for (i = 0; i < j; i++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    printf("Reversed array: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}

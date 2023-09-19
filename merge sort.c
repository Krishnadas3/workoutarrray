#include <stdio.h>
void main()
{
    int i, j, num1, num2, a[100], b[100], c[100], temp;
    printf("\n enter first array limit ");
    scanf("%d", &num1);
    printf("\n enter first array values");
    for (i = 0; i < num1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    printf("\n enter second array limit ");
    scanf("%d", &num2);
    printf("\n enter second array values ");
    for (i = 0; i < num2; i++)
    {
        scanf("%d", &b[i]);
        c[num1+i] = b[i];
    }
    for (i = 0; i < (num1 + num2) - 1; i++)
    {
        for (j = i + 1; j < num1 + num2; j++)
        {
            if (c[i] < c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("result of the array is :");
    for (i = 0; i < num1 + num2; i++)
    {
        printf(" %d\t", c[i]);
    }
}

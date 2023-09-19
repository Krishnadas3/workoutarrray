#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = 10, k, flag;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && a[i] > 1)
        {
            a[j] = a[j + 1];
        }
        n--;
        i--;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        }
}
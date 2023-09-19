#include <stdio.h>
void main()
{
    int i, j, num, a[100], freq[100], count;
    printf("\n enter the size of the array ");
    scanf("%d", &num);
    printf("enter the values of the array ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for (i = 0; i < num; i++)
    {
        count = 1;
        for (j = i + 1; j < num; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\n frequency of all elements of array : \n");
    for (i = 0; i < num; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
}

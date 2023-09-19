#include <stdio.h>
void main()
{
    int num, a[100], i, s1, l1;
    printf("enter the size of the array:");
    scanf("%d", &num);
    printf("enter the values of the array:");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    l1 = a[0];
    s1 = a[0];
    for (i = 0; i < num; i++)
    {
        if (a[i] > l1)
        {
            l1 = a[i];
        }
        else
        {
            
        }
        
    printf("largest number is:%d", l1);
}
}

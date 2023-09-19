#include <stdio.h>
void main()
{
    int num, a[100], i, s1, l1,f=1;
    printf("enter the size of the array:");
    scanf("%d", &num);
    printf("enter the values of the array:");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    l1=a[0];
    for ( i = 0; i < num; i++)
    {
        if (a[i]>l1)
        {
            l1=a[i];
        }
        
    }
    printf("\nlargest no is %d",l1);
    for ( i = 1; i <=l1; i++)
    {
        f=f*i;
    }
   printf("\nfactorial is %d",f);
}

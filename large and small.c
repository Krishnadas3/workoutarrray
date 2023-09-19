#include <stdio.h>
void main()
{
    int num,i,a[100],sm=__INT16_MAX__,lg=intm;
    printf("enter array elements ");
    scanf("%d",&num);
    printf("enter array elelments ");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < num; i++)
    {
        if (a[i]>lg)
        {
            lg=a[i];
        }
        if (a[i]<sm)
        {
            sm=a[i];
        }
        
    }
     printf("\n largest number int the array is %d",lg);
    printf("\n smallest  number int the array is %d",sm);
}
    
    



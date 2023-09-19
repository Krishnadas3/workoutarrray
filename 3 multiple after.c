#include <stdio.h>
void main()
{
    int i, j=0, num, a[100];
    
    printf("enter array limit");
    scanf("%d", &num);
    printf("enter array elelments");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < num; i++)
    {
        a[j]=a[i];
        j++;
        if (a[i]%3==0)
        {
           i=i+2;
           continue;
        }
        
    }
    for ( i = 0; i < j; i++)
    {
       printf("%d",a[i]);
    }
}
    
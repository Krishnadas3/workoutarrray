#include <stdio.h>
void main()
{
    int i, j, num, a[100], freq[100], count;
    printf("enter array limtit ");
    scanf("%d", &num);
    printf("enter array elements ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < num; i++)
    {
        count=1;
        for ( j = i+1; j < num; j++)
        {
            if (a[i]==a[j])
            {
                count++;
                a[j]=-1;
            }
            
        }
       if (a[i]!=-1)
       {
          printf("\n%d:%d",a[i],count);
       }
        
    }
    
}  
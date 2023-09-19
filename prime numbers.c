
#include <stdio.h>

int main()
{
    int num, i, j, flag, a[500], prime[100], mult[100],p=0,mul=0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    
    printf("Enter array values: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < num; i++)
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
            prime[p] = a[i];
            p++;
        }
        else if (a[i] % 5 == 0 )
        {
            mult[mul] = a[i];
            mul++;
        }
    }
    
    printf("Prime numbers: ");
    for (i = 0; i < p; i++)
    {
        printf("%d ", prime[i]);
    }
    
    printf("\nMultiples of 5: ");
    for (i = 0; i < mul; i++)
    {
        printf("%d ", mult[i]);
    }
    

}

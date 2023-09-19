#include <stdio.h>
void main()
{
     int i, num, a[100],sum=0;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          if (a[i]%2==1)
          {
               sum=sum+a[i];
          }
     }
     printf("sum = %d",sum);
}
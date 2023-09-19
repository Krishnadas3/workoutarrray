#include <stdio.h>
void main()
{
     int i, num, a[100], pos=3;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for ( i = 3-1; i < num-1; i++)
     {
          a[i]=a[i+1];
     }
     for ( i = 0; i < num-1; i++)
     {
          printf("%d",a[i]);
     }
     
}
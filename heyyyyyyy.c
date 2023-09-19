#include <stdio.h>
void main()
{
     int a[30], i, num, l1,l2, j;
     printf("\nEnter no of elements :");
     scanf("%d", &num);
     for ( i = 0; i < num; i++)
     {
          scanf("%d",&a[i]);
     }
     l1=__INT_MAX__;
     l2=__INT_MAX__;
     for ( i = 0; i < num; i++)
     {
          if (a[i]<l1)
          {
               l2=l1;
               l1=a[i];
          }
          if (a[i]<l2 && a[i]>l1)
          {
               l2=a[i];
          }
          
     }
     printf("%d",l2);
}
     
     
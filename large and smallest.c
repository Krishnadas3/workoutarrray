#include <stdio.h>
void main()
{
     int i, j, a[200], num, l1,l2;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     l1=0;
     l2=0;
     for ( i = 0; i < num; i++)
     {
          if (a[i]>l1)
          {
               l1=a[i];
          }
          else if (a[i]<l2)
          {
               l2=a[i];
          }
          
     }
     printf("\n%d",l1);
     printf("%d",l2);
     
}
     
          
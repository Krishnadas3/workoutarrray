#include <stdio.h>
void main()
{
     int i, j, num, a[100], k,temp;
     printf("enter array limtit");
     scanf("%d", &num);
     printf("enter array elements ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          if (a[i]%5==0)
          {
               for ( j = 0; j < num; i++)
               {
                    a[i]= a[i+1];
               }
               
          }
          num = num-1;
          i= i-1;
          
     }
     printf("deltetion \n");
     for ( i = 0; i < num; i++)
     {
          printf("%d",a[i]);
     }
}
     
#include <stdio.h>
void main()
{
     int i,j,num,a[100];
     printf("enter array limit");
     scanf("%d",&num);
     printf("enter array elements");
     for ( i = 0; i < num; i++)
     {
          scanf("%d",&a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          if (a[i]%2==0)
          {
               for ( j = i; j < num; j++)
               {
                    a[j+1]=a[j+3];
                    a[j+2]=a[j+4];
               }
               num=num-2;
          }
          
     }
     for ( i = 0; i < num; i++)
     {
          printf("%d",a[i]);
     }
     
}
     
     
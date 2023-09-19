#include <stdio.h>
void main()
{
     int i, j, a[200], num, flag;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values ");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          for ( j = 2; j < a[i]; j++)
          {
               if (a[i]%j==0)
               {
                    flag==1;
                    break;
               }
               
          }
          if (flag==1 && a[i]>1)
          for ( j = i; j < num; j++)
          {
               a[j+1]=a[+3];
               a[j+2]=a[j+4];
          }
         num=num-2;
     }
     for ( i = 0; i < num; i++)
     {
          printf("%d",a[i]);
     }
}
     
          
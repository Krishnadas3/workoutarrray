#include <stdio.h>
void main()
{
     int i, num, a[200],flag,j  ;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          flag=0;
          for ( j = 2; j < a[i]; j++)
          {
               if (a[i]%j==0)
               {
                    flag=1;
                    break;
               }
               
          }
          if (flag==0 && a[i]> 1)
          {
               a[i]=0;
          }
          else if (a[i]%2==0)
          {
               a[i]=1;
          }
          printf("%d",a[i]);
          
     }
     }
     
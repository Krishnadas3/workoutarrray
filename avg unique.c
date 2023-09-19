#include <stdio.h>
void main()
{
     int i, j, num, a[100], flag, sum = 0;
     float avg;
     printf("enter array limit ");
     scanf("%d", &num);
     printf("enter array values");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < num; i++)
     {
          flag=1;
          for ( j = 0; j < num; j++)
          {
               if (i!==j)
               {
                    if (a[i]==a[j])
                    {
                         flag==1;
                         break;
                    }
                    
               }
               if ()
               {
                    /* code */
               }
               
               
          }
          
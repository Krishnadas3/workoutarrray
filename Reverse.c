#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i, n = 10, a[100] = {1,2,3,4,5,6,7,8,9,10}, j = n - 1, temp,count=0;
     for (i = 0; i < j; i++)
     {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
          j--;
     }
     for (i = 0; i < n; i++)
     {
         if (a[i]%2==1)
         {
             count++;
         } 
     }
     printf("%d",count);
}
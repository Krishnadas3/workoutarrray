#include <stdio.h>
void main()
{
     int i,a[100],sum=0,num;
     float avg=0;
     printf("enter array size");
     scanf("%d",&num);
     printf("enter array valuses");
     for ( i = 0; i < num; i++)
     {
          scanf("%d",&a[i]);
     }
     for ( i = 0; i < num; i++)
     {
          sum=sum+a[i];
         
     }
      avg=sum/num;
     printf("sum of array %d\n",sum);
     printf("average of array %f\n",avg);
}
     
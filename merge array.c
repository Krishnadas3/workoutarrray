#include <stdio.h>
void main()
{
     int i,j,num1,num2,a[100],b[100],c[200],temp;
     printf("\nenter first array limit ");
     scanf("%d",&num1);
     printf("\nenter first array values");
     for ( i = 0; i < num1; i++)
     {
          scanf("%d",&a[i]);
          c[i]=a[i];
     }
     printf("\nenter second array elements");
     scanf("%d",&num2);
     printf("\nenter array second array values");
     for ( i = 0; i < num2; i++)
     {
          scanf("%d",&b[i]);
          c[num1+i]=b[i];
     }
     for ( i = 0; i < num1+num2; i++)
     {
          printf("%d",c[i]);
     }
     for ( i = 0; i < num1+num2-1; i++)
     {
          for ( j = i+1; i < num1+num2; i++)
          {
               if (c[i]<c[j])
               {
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
               }
               
          }
          
     }
     printf("\n sorted array values are ");
     for ( i = 0; i < num1+num2; i++)
     {
          printf(" %d",c[i]);
     }
     
     

     
     
}
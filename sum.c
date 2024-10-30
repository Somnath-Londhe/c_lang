#include<stdio.h>
int main()
{
     int sum[4];
     int total=0;

printf("enter the value of arr");
     for (int i = 0; i < 4; i++)
     {
        scanf("%d",&sum[i]);
        
     }
     for (int i = 0; i < 4; i++)
     {
        total*=sum[i];

     }
     printf("%d",total);
     
     

     return 0;
}

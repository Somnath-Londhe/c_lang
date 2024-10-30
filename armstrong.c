#include<stdio.h>
int main()
{
     int rem=0,temp,pb=0,num,sum=0;
     printf("enter the  number");
     scanf("%d",num);
     temp==num;
     while (temp>0)
     {
        rem=temp%10;
        pb=rem*rem*rem;
        sum=sum+pb;
        temp=temp/10;
     }if (temp==sum)
     {
        printf("armstrong number");
     }else
     {
        printf("armstrong number no");
     }
     
     
     return 0;
}

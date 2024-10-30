#include<stdio.h>
int main()
{
     int a,b,c;
     printf("enter the value a,b,c\n");
     scanf("%d\n%d\n%d",&a,&b,&c);
     if (a>b&&a>c)
     {
        printf("A is a grater %d",a);
     }else if (b>a&&b>c)
     {
        printf("B is a grater %d",b);
     }else if (c>a&&c>b)
     {
        printf("C is a grater%d",c);
     }else{
        printf("this are the all element is a same ");
     }
     
     
     
     return 0;
}

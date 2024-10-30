#include<stdio.h>
struct stud
{
    int b_no;
    char b_name[12];
    float b_price;
    
}s1[2];
 void acc(){
   for (int i = 0; i < 2; i++)
   {
        printf("enter the book details of %d book\n",i+1);
        printf("enter the book id of book %d \n",i+1);
        scanf("%d",&s1[i].b_no);
         printf("enter the book id of name %d \n",i+1);
        scanf("%s",&s1[i].b_name);
         printf("enter the book id of price %d \n",i+1);
        scanf("%f",&s1[i].b_price);
   }
   
 }
 void display(){
   for (int i = 0; i < 2; i++) 
   {
        printf("the book id of book %d is %d\n",i+1,s1[i].b_no);
        printf("enter the book id of name %d is %s\n",i+1,s1[i].b_name);
        printf("enter the book id of price %d is %f\n",i+1,s1[i].b_price);
   }
    
}
int main()
{
    acc();
    display(); 
     return 0;
}

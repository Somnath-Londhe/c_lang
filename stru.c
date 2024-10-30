#include<stdio.h>
struct stud
{
    int b_no;
    char b_name[12];
    float b_price;
    
}*s1,*h,*k;
void accept(struct stud *bn){  
    printf("enter the no \n");
    scanf("%d",&bn->b_no);
    printf("enter the name \n");
    scanf("%s",&bn->b_name);
    printf("enter the price \n");
    scanf("%f",&bn->b_price);
}
void display(struct stud *bn){
    printf("the no %d\n",bn->b_no);
    printf("the name %s\n",bn->b_name);
    printf("the price %f\n",bn->b_price);
    
}
int main()
{ 
   
    accept(&s1);
    display(&s1);

     return 0;
}

#include<stdio.h>
// #define size 
 int fun( int arr[], int var){
    for (int  i = 0; i < var ; i++)
    {
        printf("%d\n",arr[i]);
    }
    
 }
 void insert(int a[],int index,int size ){
    for (int i = index; i <size; i++)
    {
        a[i]=a[i+1];
    }
    
 }
int main()
{
    
    
    int arr[100]={3,5,65,4,3};

    insert(arr,3,5);
    fun(arr,4);
    //  int arr[100];
    //  int size;
    //  scanf("%d",&size);
    //  for (int  i = 0; i < size ; i++)
    //  {
    //     /* code */
    //     printf("enter the array element:");
    //     scanf("%d",&arr[i]);
    //  }
     
        
     return 0;
}

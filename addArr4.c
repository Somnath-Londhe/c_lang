#include<stdio.h>
// #define size 
 int fun( int arr[], int var){
    for (int  i = 0; i < var ; i++)
    {
        printf("%d\n",arr[i]);
    }
    
 }
 void insert(int a[],int index,int size,int element ){
    for (int i = size; i >= index; i--)
    {
        a[i+1]=a[i];
    }
    a[index]=element;
    
 }
int main()
{
    
    
    int arr[100]={3,5,65,4,3};

    insert(arr,3,5,6);
    fun(arr,6);
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

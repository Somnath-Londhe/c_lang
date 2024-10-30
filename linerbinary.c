#include<stdio.h>
//liner
int linerbiner(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){

        }
        return i;
    }
    return -1;
}
//binery
int binersearch(int arr[],int size,int element){
    int low,mid,high;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element){
           return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
           high=mid-1;
        }
    }
}
int main()
{
     int arr[]={23,43,2,4,34,6,5,76,54,6,87,54};
     int size=sizeof(arr)/sizeof(int);
     int element=6;
     int searchindex=linerbiner(arr,size,element);
     printf("the element array %d is %d",element,searchindex);
     return 0;
}

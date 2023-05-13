#include <stdio.h>
void main(){

    int arr[]={10,15,2,5,50,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    int mid=size/2,l=0,r=size-1;
    while(l<=mid && r>=mid){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
    printf("reversed array is \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}
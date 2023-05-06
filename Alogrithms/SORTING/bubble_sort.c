#include <stdio.h>
#include <stdbool.h>

void main(){
    int arr[]={1,22,15,58,11,5,3,25},i,j,size=sizeof(arr)/sizeof(int);
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<size;i++){
        printf("%d--",arr[i]);
    }
}

//time complexity -- O(n^2)
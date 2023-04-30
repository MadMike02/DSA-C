#include<stdio.h>
void main(){
    int arr[]={1,4,6,2,10,3};
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(arr[i]< arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<length;i++){
        printf("%d \n",arr[i]);
    }
}
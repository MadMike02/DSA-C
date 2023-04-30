#include <stdio.h>

void main(){
    int arr[]={2,10,15,2,15,50,10,2},count=0;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        for(int j=i+1;j<sizeof(arr)/sizeof(int);j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }   
    }
    printf("NUMBER OF DUPLICATES--- %d",count);
}
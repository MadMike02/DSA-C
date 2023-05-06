#include<stdio.h>
void main(){
    int arr[] = {50,20,1,70,30,20};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        int j=i;
        int curr=arr[i];
        while(j>0 && curr<arr[j-1]){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=curr;
    }

    for(int i=0;i<size;i++){
        printf("%d---",arr[i]);
    }
}

//time complexity --- O(n^2) -- but number of operation will be low as compared to bubble time will be more than selection
#include<stdio.h>
void main(){
    int arr[] = {50,20,1,70,30,20};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        int j=i;

        int curr=arr[i];
        int small=j;

        while(j<size){
            if(arr[j]<curr){
                small=j;
                curr=arr[j];
            }
            j++;
        }
        if(small != i){
            int tmp=arr[i];
            arr[i]=arr[small];
            arr[small]=tmp;
        }
        
    }

    for(int i=0;i<size;i++){
        printf("%d---",arr[i]);
    }
}

//time complexity--- O(n^2) --number of operation will be lower than bubble and faster than insertion
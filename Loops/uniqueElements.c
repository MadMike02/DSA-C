#include <stdio.h>
#include <stdbool.h>
void main(){
    int arr[]={2,10,15,2,15,50,10};

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        bool isExist=false;

        for(int j=0;j<sizeof(arr)/sizeof(int);j++){
            if(arr[i]==arr[j]){
                isExist=true;
            }
        }  

        if(!isExist){
            printf("FOUND UNIQUE--%d \n",arr[i]);
        } 
    }

}
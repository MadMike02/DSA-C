#include <stdio.h>
void main(){
    int arr[][3]={1,2,0,4,0,0,0,8,0},count=0;

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            if(arr[i][j]==0){
                count++;
            }
        }
    }

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(int);
    if(count > (row*col)/2){
        printf("MATRIX IS SPARSE\n");
    }else{
        printf("MATRIX IS NOT SPARSE\n");
    }
}
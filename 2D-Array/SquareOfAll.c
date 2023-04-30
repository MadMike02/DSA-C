#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Square of %d IS: %d \n",arr[i][j],arr[i][j]*arr[i][j]);
        }
    }
    
}
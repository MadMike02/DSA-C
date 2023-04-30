#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    //do Squre and initialize
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=arr[i][j]*arr[i][j];
        }
    }
    
    printf("new array is ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d \n",arr[i][j]);
        }
    }
    
}
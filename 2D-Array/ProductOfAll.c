#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    int prod=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            prod*=arr[i][j];
        }
    }
    printf("PRODUCT IS: %d \n",prod);
}
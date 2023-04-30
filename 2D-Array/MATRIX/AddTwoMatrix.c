#include <stdio.h>
void main(){
    int matrix1[][2]={1,2,3,4};
    int matrix2[][2]={5,6,7,8};

    int sum[2][2];
    
   for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",sum[i][j]);
        }printf("\n");
    }
    
}
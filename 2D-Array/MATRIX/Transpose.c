#include <stdio.h>
void main(){
    int matrix1[][3]={1,2,3,4,5,6,7,8,9};

    int matrix2[3][3];
    
    printf("INITIAL MATRIX-\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix1[i][j]);
        }printf("\n");
    }

   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix2[i][j]=matrix1[j][i];
            
        }
    }


    printf("Transpose of matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix2[i][j]);
        }printf("\n");
    }
    
}
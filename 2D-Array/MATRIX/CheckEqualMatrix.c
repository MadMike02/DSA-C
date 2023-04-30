#include <stdio.h>
#include <stdbool.h>
bool isEqualMatrixs(int mat1[][2],int mat2[][2]);

void main(){
    int matrix1[][2]={1,2,3,4};
    int matrix2[][2]={1,2,3,4};
    if(isEqualMatrixs(matrix1,matrix2)){
        printf("MATRIXES ARE EQUAL\n");
    }else{
        printf("MATRIXES ARE NOT EQUAL\n");
    }
}

bool isEqualMatrixs(int mat1[][2],int mat2[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(mat1[i][j] != mat2[i][j]){
                return false;
            }
        }
    }
    return true;
}
#include <stdio.h>
void main(){
    int matrix1[][2]={1,2,3,4};
    int matrix2[][2]={5,6,7,8};

    int mul[2][2];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int sum=0;
            for(int k=0;k<2;k++){
                sum+=(matrix1[i][k] * matrix2[k][j]);

            }
            mul[i][j]=sum;
        }
    }

    printf("Multiplication of matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mul[i][j]);
        }printf("\n");
    }
    
}
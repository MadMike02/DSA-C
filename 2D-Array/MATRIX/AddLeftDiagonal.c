#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
   int sum=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j)
            {
                sum+=arr[i][j];
            }
            
        }
    }
    
    printf("SUM OF LEFT DIAGONAL IS: %d",sum);
}
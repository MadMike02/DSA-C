#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    
    printf("new array is ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] % 2 ==0)
            {
                printf("EVEN ELEMENT- %d \n",arr[i][j]);
            }else{
                printf("ODD ELEMENT- %d \n",arr[i][j]);
            }
            
        }
    }
    
}
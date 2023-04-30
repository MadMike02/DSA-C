#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    
    int even=0,odd=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] % 2 ==0)
            {
                arr[i][j]=0;
            }else{
               arr[i][j]=1;
            }
            
        }
    }
     printf("new array is ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d \n",arr[i][j]);
        }
    }
    
}
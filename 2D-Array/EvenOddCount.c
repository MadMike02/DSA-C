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
                even++;
            }else{
               odd++;
            }
            
        }
    }
    
    printf("EVEN IS %d, ODD IS %d",even,odd);
}
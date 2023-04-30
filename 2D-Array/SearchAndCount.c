#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    
    int toFound,count=0;
    printf("enter Element to Search \n");
    scanf("%d",&toFound);
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == toFound)
            {
                count++;   
            }
            
        }
    }
    printf("Elements exist in array %d times.",count);
    
}
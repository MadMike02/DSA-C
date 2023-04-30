#include <stdio.h>
void main(){
    int arr[10];
    printf("enter array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
   
   int sum;
   printf("ENTER SUM TO SEARCH FOR--\n");
   scanf("%d",&sum);
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i!=j && arr[i]+arr[j]==sum)
            {
                printf("PAIR FOUND!! (%d,%d) for element (%d,%d)\n",i,j,arr[i],arr[j]);
            }
            
        }
    }
    
}
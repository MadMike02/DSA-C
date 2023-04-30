#include <stdio.h>
#include <stdbool.h>
bool FindPrime(int num);

void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    int index[]={-1,-1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(FindPrime(arr[i][j]))
            {
                printf("Found Prime Number %d\n",arr[i][j]);
            }
            
        }
    }
    
    
    
}

bool FindPrime(int num){
    int count=1;
    for(int i =2;i<=num;i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count==2){
        return true;
    }else{
        return false;
    }
}
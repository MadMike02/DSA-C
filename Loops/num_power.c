#include <stdio.h>

int main() {
    // Write C code here
    //01123
    int num,power,res=1,i=0;
    printf("ENTER NUMBER \n");
    scanf("%d",&num);
    printf("ENTER POWER \n");
    scanf("%d",&power);
    
    //by for
    // for(int i=0;i<power;i++){
    //     res*=num;
    // }
    
    //by while
    // while(i<power){
    //     res*=num;
    //     i++;
    // }
    
    //by Do-While
    do{
        res*=num;
        i++;
    }while(i<power);
    
    printf("RESULT IS: %d",res);
}
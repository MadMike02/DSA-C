#include <stdio.h>

int main() {
    // Write C code here
    for(int r=1;r<=5;r++){
        for(int i=5;i>=1;i--){
            if(i>r){
                printf("_");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

// ____*
// ___**
// __***
// _****

// *****
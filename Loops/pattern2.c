#include <stdio.h>

int main() {
    // Write C code here
    for(int r=1;r<=10;r+=2){
        for(int i=1;i<=r;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// *
// ***
// *****
// *******
// *********
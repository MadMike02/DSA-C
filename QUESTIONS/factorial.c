#include <stdio.h>

#define NUM 10
void main(){
    long prod=1;
    for(int i=1;i<=NUM;i++){
        prod*=i;
    }

    printf("%d",prod);
}
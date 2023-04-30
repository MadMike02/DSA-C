#include <stdio.h>

void main(){
    int num,rev=0;
    scanf("%d",&num);
    
    //for
    for(num;num>0;num/=10){
        rev=(rev*10)+num%10;
    }

    //while
    while(num>0){
        rev=(rev*10) + num%10;
        num/=10;
    }

    //do-while
    do{
        rev = (rev*10) + num%10;
        num/=10;
    }while(num>0);

    printf("%d",rev);
}
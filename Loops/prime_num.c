//to find number is prime or not
//prime number has 2 factor 1 and itself

#include <stdio.h>

void main(){
    int num,i=1,check=0;
    scanf("%d",&num);
    
    for(i;i<=num;i++){
        if(num%i == 0){
            check++;
        }
    }

    while(i<=num){
        if(num%i ==0){
            check++;
        }
        i++;
    }

    do{
        if(num%i == 0){
            check++;
        }
        i++;
    }while(i<=num);
    
    if(check == 2){
        printf("prime number");
    }else{
        printf("not prime");
    }
}
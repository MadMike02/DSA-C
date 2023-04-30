#include <stdio.h>

void main(){
    int i=0,init=0,next=1,sum;
    
    //by for
    for(i;i<10;i++){
        sum=init+next;
        printf("%d\n",sum);
        init=next;
        next=sum;
    }

    //by while
    while(i<10){
        sum=init+next;
        printf("%d\n",sum);
        init=next;
        next=sum;
        i++;
    }

    //by do-while
    do{
        sum=init+next;
        printf("%d\n",sum);
        init=next;
        next=sum;
        i++; 
    }while(i<10);
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    
    
    char str[100]={"HELLO world SAHIL KSHITIJ RaHUl"};
    int start=0,end=strlen(str)-1;

    for(int i=end;i>=0;i--){
        if(str[i] == ' ' || i==0){
            if(i==0){
                start=i;
            }else{
                start=i+1;
            }
            for(int i=start;i<=end;i++){
                printf("%c",str[i]);
            }
            printf(" ");
            end=i-1;
        }
    }
}
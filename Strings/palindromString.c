#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    
    char string_reverse[100]={""};
    // char str[100]={"HELLO world SAHIL KSHITIJ RaHUl"};
    // char str[100]={"maam"};
    char str[100]={"IHILH"};
    int j=0;

    
    bool isEqual = true;
    j=strlen(str)-1;
    for(int i=0;i<=strlen(str)/2;i++){
        if(str[i] != str[j]){
            printf("NOT PALINDROM");
            isEqual=false;
            break;
        }
        j--;
    }
    if(isEqual){
            printf("PALINDROM");
    }
   
    
}
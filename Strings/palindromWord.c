#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrom(char str[100],int start,int end){
    int midPoint=(start+end)/2;

    bool isEqual = true;

    for(int i=start;i<=midPoint;i++){
        if(str[i] != str[end]){
            return false;
        }
        end--;
    }
    return true;
}

void printWord(char str[100],int start,int end){
    for(int i=start;i<end;i++){
        printf("%c",str[i]);
    }
}
void main(){
    
    
    char str[100]={"HELLO IHLHI SAHIL KSHITIJ CEEC"};
    int start=0,end=-1;

    for(int i=0;i<strlen(str);i++){
        if(str[i] == ' ' || i == strlen(str)-1){
            
            start=end+1;
            
            if(i == strlen(str)-1){
                end=i+1;
            }else{
                end=i;
            }
            if(isPalindrom(str,start,end-1)){
                printf("\nPALINDROM FOUND\n");
                printWord(str,start,end);
            }
            
        }
        
    }
   
    
}
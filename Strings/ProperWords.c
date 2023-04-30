#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool checkwordIsProper(char word[100],int start,int end){
    if(word[start] >= 'A' && word[start] <= 'Z'){
        for(int i=start+1;i<end;i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                return false;
            }
        }
        return true;
    }else{
        return false;
    }
}
void main(){
    
    
    char str[100]={"HELLO World SAHIL KSHITIJ RaHUl Sahil Cheetah KiNg"};
    int start=0,end=-1,count=0;
    
    for(int i=0;i<strlen(str);i++){
        if(str[i] == ' ' || i == strlen(str)-1){
            start=end+1;
            end=i;
            if(checkwordIsProper(str,start,end)){
                count++;
            }
        }
    }

    printf("Proper words are: %d",count);
    
    
    
}
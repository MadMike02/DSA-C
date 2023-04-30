#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
bool checkWordEqual(char word[100],char toCheck[100],int start,int end){
    int j=0;
    for(int i=start;i<end;i++){
        if(word[i] != toCheck[j]){
            return false;
        }
        j++;
    }
    return true;
}
void main(){
    
    
    char str[100]={"HELLO world SAHIL KSHITIJ RaHUl"};
    char word_to_search[100]={"worLd"};
    int start=0,end=-1;
    bool notFound=true;
    for(int i=0;i<strlen(str);i++){
        if(str[i] == ' ' || i == strlen(str)-1){
            start=end+1;
            end=i;
            if(checkWordEqual(str,word_to_search,start,end)){
                printf("word found!");
                notFound=false;
                break;
            }
        }
    }

    if(notFound){
        printf("word not found");
    }
    
    
}
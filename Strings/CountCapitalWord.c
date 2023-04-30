#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    
    int count=0,capital_word=0,word_letter_count=0;
    bool isCapital=false;
    char str[100]={"HELLO world SAHIL KSHITIJ RaHUl"};
    // printf("ENTER STRING\n");
    // gets(str); 
    //fgets(str,100,stdin) --->>>other way to take input

    
    for(int i=0;i<strlen(str);i++){
        if(str[i] != ' '){
            word_letter_count++;
            if(str[i] >= 'A' && str[i] <= 'Z'){
                isCapital=true;
                capital_word++;
            }else{
                word_letter_count=0;
                isCapital=false;
            }
        }
        printf("%c--%d---%d---%d\n",str[i],capital_word,word_letter_count,isCapital);
        if((str[i] == ' ' || i == strlen(str)-1 ) && capital_word==word_letter_count && isCapital){
                count++;
                capital_word=0;
                word_letter_count=0;
            }

    }


    
    
    printf("CAPTIAL WORDS ARE:%d\n",count);
}
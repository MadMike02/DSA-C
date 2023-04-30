#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    int count=0;
    char str[100];
    printf("ENTER STRING\n");
    gets(str);

    if(strlen(str) > 0){
        for(int i=0;i<strlen(str);i++){
            if(str[i] == ' '){
                count++;
            }
        }
    count++;

    }else{
        count = 0;
        }


    // int i=0;
    
    // while(true)
    // {
    //     if(str[i] == ' '){
    //         count++;
    //     }
    //     else if(i == strlen(str)-1){
    //         printf("%c",str[i]);
    //         count++;
    //         break;
    //     }
    //     i++;
    // }
    
    printf("WORDS ARE:%d\n",count);
}
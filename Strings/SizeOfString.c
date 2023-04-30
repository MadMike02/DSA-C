#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    
    char str[100];
    gets(str);
    int size =sizeof(str)/sizeof(char);

    
    printf("WORDS ARE:%d\n",size);
}
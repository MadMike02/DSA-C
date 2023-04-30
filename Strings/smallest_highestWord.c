#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    
    
    char str[100]={"hello hell is near goOfward"};
    int Count=0,start=0,end=-1;
    int highest=0,hStart=0,hEnd=0;
    int smallest=strlen(str),sStart=0,sEnd=0;

    for(int i=0;i<strlen(str);i++){
        if(str[i] == ' ' || i == strlen(str)-1){
            
            start=end+1;
            end=i;
            if(highest < Count){
                highest=Count;
                hStart=start;
                if(end == strlen(str)-1){
                    hEnd=end+1;
                }else{
                    hEnd=end;
                }
            } 
            if(smallest > Count){
                
                smallest=Count;
                sStart=start;
                if(end == strlen(str)-1){
                    sEnd=end+1;
                }else{
                    sEnd=end;
                }
            }
            if(end == strlen(str)-1){
                Count++;
            }else{
                Count=-1;
            }
        }
        Count++;
    }


    printf("HIGHEST WORD WITH LENGTH %d IS :",highest);
    for(int i=hStart;i<hEnd;i++){
        printf("%c",str[i]);
    }

    printf("\nSMALLEST WORD WITH LENGTH %d IS :",smallest);
    for(int i=sStart;i<sEnd;i++){
        printf("%c",str[i]);
    }
    
    
    
    
}
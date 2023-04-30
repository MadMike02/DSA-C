#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

//check again
bool checkDuplicateExist(char word[100],char singleWord[100],
int start,int end){
    printf("%s---%s---%d---%d--%d\n",word,singleWord,strlen(singleWord),start,end);
    // int j=start;
    // for(int i=0;i<strlen(word);i++){
    //     if(i != j){
    //         if(word[i] == word[j] && j<end)
    //         {
    //             j++;
    //         }
    //     }
    // }
    // return true;
    // printf("%s---%s---%d--%d\n",word,word_to_search,start,end);
}
void main(){
    
    
    char str[100]={"HELLO world SAHIL KSHITIJ RaHUl"};
    char word[10];
    int start=0,end=-1,count=0,j=0,i=0;

    while(i<strlen(str)){
        while(str[i] != ' ' || i != strlen(str)-1){
            word[j]=str[i];
            j++;
            i++;
        }
        int m=0;
        for(int k=i;k<strlen(str);k++){
            if(str[k] != ' ' || k != strlen(str)-1){
                if(word[m] == str[k]){
                    m++;
                }
            }else{
                // if(m)
            }
        }
        // i++;
    }
    for(int i=0;i<strlen(str);i++){
        word[j]=str[i];
        j++;
        // printf("j---%d",j);
        if(str[i] == ' ' || i == strlen(str)-1){
            start=end+1;
            end=i;
            if(checkDuplicateExist(str,word,start,end)){
                count++;
            }
            j=0;
        }
    }

    printf("DUPLICATE WORDS ARE--%d",count);
    
    
}
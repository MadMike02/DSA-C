#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[10]={1,2,5,3,8},elem,i;
    printf("ENTER ELEMENT TO SEARCH\n");
    scanf("%d",&elem);

    for(i=0;i<sizeof(arr)/sizeof(int);i++){
        if(elem == arr[i]){
            printf("element found at position%d\n",i+1);
            return;
        }
    }
    printf("element not found \n");
}

//time complexity -- O(n)

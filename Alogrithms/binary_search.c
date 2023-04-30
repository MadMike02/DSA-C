#include <stdio.h>
#include <stdbool.h>

void main(){
    int arr[]={1,2,5,8,11,15,20,25},
    elem,
    high=sizeof(arr)/sizeof(int),
    low=0,
    mid=(high+low)/2;
    printf("ENTER ELEMENT TO SEARCH\n");
    scanf("%d",&elem);

    while(low <= high){
        if(arr[mid] == elem){
            printf("element found at position %d\n",mid+1);
            return ;
        }else if(arr[mid] > elem){
            high=mid-1;
        }else{
            low=mid+1;
        }
        mid=(high+low)/2;
    }
    if(low > high){
        printf("element not found \n");
    }
}

//time complexity -- O(log(n)) --- number of operations is getting halfed each time
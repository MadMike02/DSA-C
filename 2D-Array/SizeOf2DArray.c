#include <stdio.h>
void main(){
    
    //initilization -->>> the column size is must, row size can be ignored.
    
    int arr[][3] = {1,2,3,4};

    int col = sizeof(arr[0])/sizeof(int);
    int row = sizeof(arr)/sizeof(arr[0]);
    printf("COL - %d\n",col);
    printf("ROW - %d\n",row);
}
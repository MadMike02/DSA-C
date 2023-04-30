#include <stdio.h>
void main(){
    int arr[][3] = {1,2,3,4,5,6,7,8,9,10};
    
    int row_num = sizeof(arr)/sizeof(arr[0]);
    int col_num = sizeof(arr[0])/sizeof(int);
    int tota_elem = row_num*col_num;
    int track_row=0;
    int track_col=0;
    for(int i=1;i<=tota_elem;i++){

        if(track_col==col_num){
            track_col=0;
            track_row++;
        }

        printf("elem1--%d\n",arr[track_row][track_col]);
        track_col++;
    }
}
#include <stdio.h>
void main(){
    
    int row_num = 5;
    int col_num = 5;
    int tota_elem = row_num*col_num;

    int track_row=0;
    int track_col=0;
    for(int i=1;i<=tota_elem;i++){

        if(track_col==col_num){
            track_col=0;
            track_row++;
            printf("\n");
        }

        if((track_col + track_row) >= (row_num-1))
        {printf("*");}
        else{printf(" ");}
        track_col++;
    }
}
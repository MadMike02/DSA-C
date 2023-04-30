#include <stdio.h>
void main(){
    int arr[3][3];
    printf("enter array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    
    int toFound,toReplace=0;
    printf("enter Element to Replace \n");
    scanf("%d",&toFound);
    printf("enter Element to Replace With \n");
    scanf("%d",&toReplace);
    
    int index[]={-1,-1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == toFound)
            {
                index[0]=i;
                index[1]=j;
            }
            
        }
    }
    
    if(index[0] == -1 && index[1]==-1){
        printf("Entered element is not exist in array.");
    }else{
        arr[index[0]][index[1]]=toReplace;
        printf("Element Replaces Successfully!.");
    }
    
}
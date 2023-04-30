#include <stdio.h>
int calculateVal(int val){
    printf("called");
    int count = 0,res=0;
    while(val  > 0) {
        if (count == 0) {
            res  += (val % 10);
            count++;
        } else if (count == 1) {
            res += (val % 10) * 100;
            count++;
        } else if (count == 2) {
            res += (val % 10) * 10000;
            count = 0;
            
        }
        val /= 10;
    }
    return res;
}
int main() {
    // Write C code here
    /*int arr[] = {39, 14, 26, 49};
    for (int i = 0; i < (sizeof(arr)/sizeof(int)) - 1; i++) {
        arr[i] = arr[i] * 100 + arr[i+1];
    }

for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
    printf("%d ", arr[i]);
}
    return 0;*/
    
    int arr[] = {214, 17, 98, 346};
    
    for (int  i= 0; i < sizeof (arr)/sizeof(int); i++) {
        arr[i] = calculateVal(arr[i]);
    }
    
    for (int j = 0; j < sizeof (arr)/sizeof(int); j++) {
        printf("%d", arr[j]);
    }
    
    return 0;
}

// int calculateVal(int val) 

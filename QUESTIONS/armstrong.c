#include <stdio.h>

int main() {
    int num = 153, rem, res = 0, len;
    int r = num;

    for (r; r % 10 != 0; r /= 10) {
        len++;
    }

    for (r; r % 10 != 0; r /= 10) {
        rem = r % 10;
        printf("%d", rem);
        printf("%d", len);
        // res = max(rem, len);
        // res += val;
    }

    printf("%d", res);
}



    // for (r; r%10 != 0; r /= 10) {
    //     rem = r % 10;
    //     res += rem * rem * rem;
    // }

    // if (res == num) {
    //     printf("%d is an armstrong number", num);
    // } else {
    //     printf("%d is not an armstrong number", num);
    // }


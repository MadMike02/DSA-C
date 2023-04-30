#include <stdio.h>
char numToCharacter(int num);
void main(){
    int num = 2439;
    // scanf('%d',&num);

    // char num_to_word[20][10] = { "", "one", "two","three","four","five","six","seven","eight","nine","","eleven","twelve",
    //     "thirteen","fourteen","fifteen","sixteen", "seventeen","eighteen", "nineteen"};
    //  char tens_name[10][20] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty",
    //  "ninety"};

     char places[4][10] = {"ones","tens","hundred","thousand"};

     int rev,length=0;
     while(num > 0){
        length++;
        rev=rev*10 + num%10;
        num/=10;
     }
    while(rev>0){
        int last = rev%10;
        if(length >= 3){
            printf("%d %c,",last,places[length-1]);
            length--;
        }
        else{
            if(length <=2){
                printf(numToCharacter(last));
                length--;
            }
        }
        rev/=10;
    }
}

char numToCharacter(num){
    switch (num)
    {
    case 1:
        return "ONE";
        break;
    case 2:
        return "TWO";
        break;
    case 3:
        return "THREE";
        break;
    case 4:
        return "FOUR";
        break;
    case 5:
        return "FIVE";
        break;
    case 6:
        return "SIX";
        break;
    case 7:
        return "SEVEN";
        break;
    case 8:
        return "EIGHT";
        break;
    case 9:
        return "NINE";
        break;
    default:
        return "ZERO";
        break;
    }
}

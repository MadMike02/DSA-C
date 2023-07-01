#include <stdio.h>
#include <stdlib.h>
struct stack{
    int num;
    struct stack *nxt;
} *top, *head;

void push();
void pop();
void display();
void displayTop();

int main(){
    int n, ch;
    printf("Enter the size of Stack \n");
    scanf("%d", &n);
    
    printf("Select the operation to perform \n");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.Display Top\n 5.EXIT\n\n");
    
    do {
        printf("Enter the Choice:");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1: {
                push();
                break;
            }
            
            case 2: {
                pop();
                break;
            }
            
            case 3: {
                display();
                break;
            }
            
            case 4: {
                displayTop();
                break;
            }
            
            case 5: {
                printf("Operation EXIT");
                break;
            }
            
            default: {
                printf("Please select a valid choice");
            }
        }
    } while (ch != 5);
    return 0;
}

void push(){
    struct stack *newNode;
    newNode = (struct stack *)malloc(sizeof(struct stack));
    if(newNode == NULL){
        printf("Can\'t insert element\n");
    }else{
        int num;
        printf("Enter element to insert\n");
        scanf("%d", &num);

        newNode->num = num;
        if(top == NULL){
            newNode->nxt = NULL;
            top = newNode;
            head = newNode;
        }else{
            newNode->nxt = head;
            head = newNode;
            top = head;
        }
        printf("element inserted successfully\n");
    }
}

void pop(){
    if(top == NULL){
        printf("Stack is Empty\n");
    }else{
        top = head->nxt;
        head = top;
    }
}

void display(){
    if(top == NULL){
        printf("Stack is Empty\n");
    }else{
        struct stack *tmp;
        tmp = head;
        while(tmp != NULL){
           printf("element is : %d\n",tmp->num);
           tmp = tmp->nxt;
        }
    }
}

void displayTop() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", head->num);
    }
}

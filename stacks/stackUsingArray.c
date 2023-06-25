#include <stdio.h>
int stack[100];
int top = -1, n, ch;

void push() {
    int item;
    if (top >= n - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter the value to be pushed \n");
        scanf("%d", &item);
        stack[++top] = item;
        printf("Pushed %d to the stack\n", item);
    }
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        int item = stack[top--];
        printf("Popped %d from the stack\n", item);
        return item;
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {

    printf("Enter the size of Stack \n");
    scanf("%d", &n);
    
    printf("Select the operation to perform \n");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n\n");
    
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
                printf("Operation EXIT");
                break;
            }
            
            default: {
                printf("Please select a valid choice");
            }
        }
    } while (ch != 4);
    return 0;
}

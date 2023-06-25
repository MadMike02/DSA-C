#include <stdio.h>

int stack[100], top = -1;
void push();
int pop();
void display();

void main()
{
    int choice;

    do
    {
        printf("-------------------------------------\n");
        printf("Press 1 For push operation\n");
        printf("Press 2 For pop operation\n");
        printf("Press 3 For display operation\n");
        printf("Press 4 For Exit operation\n");
        printf("-------------------------------------\n");

        scanf("%d", &choice);


        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Please enter a valid option\n");
            break;
        }
    } while (choice != 4);
}

void push()
{
    if (top == (sizeof(stack) / sizeof(int)) - 1)
    {
        printf("Stack is overflowed\n");
    }
    else
    {
        int num;
        printf("Enter element to insert\n");
        scanf("%d", &num);
        top++;
        stack[top] = num;
        printf("Element pushed successfully\n");
    }
}
int pop()
{
    if (top == -1)
    {
        printf("Stack is underflowed\n");
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is underflowed\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("element at position %d is %d\n", i, stack[i]);
        }
    }
}
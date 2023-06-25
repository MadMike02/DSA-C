#include <stdio.h>
#include <stdlib.h>
struct stack{
    int num;
    struct stack *nxt;
} *top, *head;

void push();
void pop();
void display();

void main(){
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

void push(){
    struct stack *newNode;
    newNode = (struct stack *)malloc(sizeof(struct stack));
    if(newNode == NULL){
        printf("unable to insert element\n");
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
        printf("Stack is underflowed\n");
    }else{
        top = head->nxt;
        head = top;
    }
}

void display(){
    if(top == NULL){
        printf("Stack is underflowed\n");
    }else{
        struct stack *tmp;
        tmp = head;
        while(tmp != NULL){
           printf("element is:%d\n",tmp->num);
           tmp = tmp->nxt;
        }
    }
}
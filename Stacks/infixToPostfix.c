#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct stack{
    char elem;
    struct stack *nxt;
} *top, *head;
void push(char elem);
void pop();
void display();
char displayTop();

bool checkIsOperator(char elem){
    char operator[] = {"/*+-^()"};
    for(int i=0;i<strlen(operator);i++){
        if (elem == operator[i])
        {
            return true;
        }
    }
    return false;
}
void main(){
    char str[100] = {"K+L-M*N+(O^P)*W/U/V*T+Q"};
    char postFix[100];
    int k=0;
    printf("infix expression---%s\n",str);
    int i=0;
    do{
        if(top == NULL){
            push('(');
        }else{
            if(str[i] != ' '){
                if(checkIsOperator(str[i])){
                    if(str[i] != ')'){
                        push(str[i]);
                    }else{
                        char topElement = displayTop();
                        while(topElement != '(')
                        {
                            postFix[k]=topElement;
                            k++;
                            pop();
                            topElement = displayTop();
                        }
                    }
                    i++;
                }else{
                    postFix[k]=str[i];
                    k++;
                    i++;
                }
            }else{
                i++;
            }
        }
    }while(i != strlen(str));

    //emptystack
    while(top != NULL){
        char topElement = displayTop();
        if(topElement != '(')
        {
            postFix[k]=topElement;
            k++;
        }
        pop();
    }
    printf("postfix expression---%s\n",postFix);
}

void push(char elem){
    struct stack *newNode;
    newNode = (struct stack *)malloc(sizeof(struct stack));
    if(newNode == NULL){
        printf("unable to insert element\n");
    }else{
        newNode->elem = elem;
        if(top == NULL){
            newNode->nxt = NULL;
            top = newNode;
            head = newNode;
        }else{
            newNode->nxt = head;
            head = newNode;
            top = head;
        }
        display();

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
char displayTop(){
    if(top == NULL){
        printf("empty\n");
        return '~';
    }else{
        return top->elem;
    }
}

void display(){
    if(top == NULL){
        printf("Stack is underflowed\n");
    }else{
        struct stack *tmp;
        tmp = head;
        while(tmp != NULL){
           tmp = tmp->nxt;
        }
    }
}
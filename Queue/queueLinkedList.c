#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void front();
void rear();
void display();

struct queue
{
    int num;
    struct queue *next;
}*frt,*rer;

int size, ch;

int main(){
    do {
    printf("-----------------------------------------------\n");
    printf("Select the operation to perform \n");
    printf("1.enqueue\n 2.dequeue\n 3.front\n 4.rear\n 5.display \n 6.exit\n");
        printf("Enter the Choice:");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1: {
                enqueue();
                break;
            }
            
            case 2: {
                dequeue();
                break;
            }
            
            case 3: {
                front();
                break;
            }

            case 4: {
                rear();
                break;
            }
            case 5:{
                display();
                break;
            }
            case 6: {
                printf("Operation EXIT");
                break;
            }
            
            default: {
                printf("Please select a valid choice");
            }
        }
    } while (ch != 6);
    return 0;
}

void enqueue(){
    printf("---------------------enqueue--------------------------\n");
    struct queue *newNode;
    newNode = (struct queue *)malloc(sizeof(struct queue));
    if(newNode == NULL){
        printf("Can't insert element !\n");
        return;
    }else{
        int num;
        printf("enter element to enter \n");
        scanf("%d", &num);
        newNode->num=num;
        newNode->next=NULL;

        if(rer == NULL){
            rer = newNode;
            frt = newNode;
        }else{
            rer->next = newNode;
            rer = newNode;
        }
        
    }
}

void dequeue(){
    printf("---------------------dequeue--------------------------\n");

    if(frt == NULL){
        printf("Queue is underflow !\n");
        return;
    }else{
        struct queue *tmp;
        tmp = frt;
        frt = frt->next;
        printf("dequeue %d from the queu\n", tmp->num);
        
    }
}

void front(){
    printf("---------------------front--------------------------\n");

    printf("Front is %d \n",frt->num);
}

void rear(){
    printf("---------------------rear--------------------------\n");

    printf("Rear is %d \n",rer->num);
}

void display(){
    printf("---------------------display--------------------------\n");

    if(frt == NULL){
        printf("Queue is underflow !\n");
        return;
    }else{
        struct queue *tmp;
        tmp = frt;
        do{
            printf("element is: %d\n",tmp->num);
            tmp=tmp->next; 
        }
        while (tmp != NULL);
    }
}
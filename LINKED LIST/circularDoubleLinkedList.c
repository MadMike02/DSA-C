#include <stdio.h>
#include <stdlib.h>
void createLinkedList(int size);
void displayListFromHead();
void displayListFromTail();

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*tail;

void main(){
    int n;
    printf("enter number of nodes -- \n");
    scanf("%d", &n);
    printf("------CREATING LINKED LIST-------\n");
    createLinkedList(n);
    printf("-----printing list from starting------\n");
    displayListFromHead();
    printf("-----printing list from ending------\n");
    displayListFromTail();
}

void createLinkedList(int size){
    struct node *newNode,*tmp;
    int num,i;
    head=(struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("cannot allocate memory\n");
    }
    else
    {
        printf("enter data for node --1 : \n");
        scanf("%d",&num);

        head->data = num;
        head->next = NULL;
        head->prev = NULL;

        tmp = head;
        tail = head;
        for (int i = 2; i <= size; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if (newNode == NULL)
            {
                printf("cannot allocate memory\n");
                break;
            }
            else
            {
                printf("enter data for node -- %d \n", i);
                scanf("%d", &num);
                newNode->data = num;
                newNode->next = NULL;
                newNode->prev = tmp;

                tmp->next = newNode;
                tmp = tmp->next;
                tail = tmp;
            }

            if(tmp->next == NULL){
                tmp->next = head;
                head->prev = tail;
            }
            
        }
    }
}

void displayListFromHead(){
    struct node *tmp;
    tmp=head;
    if(tmp == NULL)
    {
        printf("linked list is empty\n");
    }else{
        printf("%d\n",tmp->data);
        tmp=tmp->next;
        
        while(tmp != head){
            printf("%d\n",tmp->data);
            tmp=tmp->next;
        }
    }
}
void displayListFromTail(){
    struct node *tmp;
    tmp=tail;
    if(tail == NULL)
    {
        printf("linked list is empty\n");
    }else{
        printf("%d\n",tmp->data);
        tmp=tmp->prev;
        
        while(tmp != tail){
            printf("%d\n",tmp->data);
            tmp=tmp->prev;
        }
    }
}
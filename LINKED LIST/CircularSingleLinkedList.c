#include <stdio.h>
#include <stdlib.h>
void createLinkedList(int size);
void displayList();

struct node{
    int data;
    struct node *next;
}*head;

void main(){
    int n;
    printf("enter number of nodes -- \n");
    scanf("%d", &n);
    printf("------CREATING LINKED LIST-------\n");
    createLinkedList(n);
    printf("-----printing list------\n");
    displayList();
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

        tmp = head;
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

                tmp->next = newNode;
                tmp = tmp->next;
            }
            if(tmp->next == NULL){
                tmp->next = head;
            }
            
        }
    }
}

void displayList(){
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
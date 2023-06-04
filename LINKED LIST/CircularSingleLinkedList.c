#include <stdio.h>
#include <stdlib.h>
void createLinkedList(int size);
void displayList();
void insertionAtEnd();
void insertionAtPostion();
void insertionAtBeginning();
int getListSize();

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
    // printf("------Inserting At beginning-----\n");
    // insertionAtBeginning();
    // printf("-----printing list------\n");
    // displayList();
    // printf("------Inserting At ending-----\n");
    // insertionAtEnd();
    // printf("-----printing list------\n");
    // displayList();
    // printf("-------list size---------");
    // printf("%d",getListSize());
    printf("------Inserting At position-----\n");
    insertionAtPostion();
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

void insertionAtBeginning(){
    struct node *newNode,*tmp;
    newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Unable to allocate memory\n");
    }else{
        int num;
        tmp=head;
        printf("enter new node data\n");
        scanf("%d",&num);
        newNode->data=num;

        if(tmp == NULL){
            newNode->next =NULL;
            head = newNode;
        }else{
            newNode->next = head;
            //changing last node
            tmp = tmp->next;
                //traverse till last node
                while(tmp->next != head){
                    tmp = tmp->next; 
                }
            tmp->next = newNode;
            head = newNode;
            
        }
    }
}

void insertionAtEnd(){
    struct node *newNode,*tmp;
    newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Unable to allocate memory\n");
    }else{
        int num;
        tmp=head;
        printf("enter new node data\n");
        scanf("%d",&num);
        newNode->data=num;

        if(tmp == NULL){
            newNode->next =NULL;
            head = newNode;
        }else{
            newNode->next = head;
            //changing last node
            tmp = tmp->next;
                //traverse till last node
                while(tmp->next != head){
                    tmp = tmp->next; 
                }
            tmp->next = newNode;
            
        }
    }
}

void insertionAtPostion(){
    int num, toInsertAt, i=1;
    printf("Enter position to insert  At\n");
    scanf("%d",&toInsertAt);
    if(toInsertAt == 1){
        printf("---INSERTING AT BEGINNING----\n");
        insertionAtBeginning();
    }else if(toInsertAt == getListSize()){
        printf("---INSERTING AT ENDINING----\n");
        insertionAtEnd();
    }else{
        struct node *newNode,*tmp,*prev;
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL){
            printf("cannot allocate memory \n");
        }else{
            tmp=head;
            
            printf("enter element to insert \n");
            scanf("%d",&num);
            
            while(i != toInsertAt){
                
                prev=tmp;
                tmp=tmp->next;
                i++;
            }

            newNode->data=num;
            prev->next=newNode;
            newNode->next=tmp;
        }
    }
}

int getListSize(){
    struct node *tmp;
    tmp=head;
    if(tmp == NULL){
        return 0;
    }else{
        int i = 1;
        if(tmp->next != NULL){
            i++;
            tmp = tmp->next;
            while(tmp->next != head){
                i++;
                tmp = tmp->next;
                
            } 
        }
        return i;
    }
}
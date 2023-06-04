#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nxtptr;
} *stnode;

void createNodeList(int n);
void displayList();
void insertionAtBeeginning();
void insertionAtEnd();
void insertionAtPostion();
void inverseOfLinkedList();
int deleteFromStart();
int deleteFromEnd();
int deleteFromPostion(int n);

void main()
{
    int n;
    printf("enter number of nodes -- \n");
    scanf("%d", &n);
    createNodeList(n);
    displayList();
    // printf("inserting node at beginning \n");
    // insertionAtBeeginning();
    // printf("Printing list \n");
    // displayList();
    // printf("inserting node at Ending \n");
    // insertionAtEnd();
    // printf("Printing list \n");
    // displayList();
    // printf("inserting node at position \n");
    // insertionAtPostion();
    // printf("Printing list \n");
    // displayList();

    printf("Inverse of linked list \n");
    inverseOfLinkedList();
    printf("Printing list \n");
    displayList();


}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if (stnode == NULL)
    {
        printf("cannot allocate memory\n");
    }
    else
    {
        printf("enter data for 1st node \n");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nxtptr = NULL;
        tmp = stnode;

        for (int i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf("cannot allocate memory\n");
                break;
            }
            else
            {
                printf("enter data for node -- %d \n", i);
                scanf("%d", &num);
                fnNode->num = num;
                fnNode->nxtptr = NULL;

                tmp->nxtptr = fnNode;
                tmp = tmp->nxtptr;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if (stnode == NULL)
    {
        printf("empty list");
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            printf("data = %d \n", tmp->num);
            tmp = tmp->nxtptr;
        }
    }
}

void traversal()
{
    struct node *tmp;
    if (stnode == NULL)
    {
        printf("empty list");
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            printf("data = %d \n", tmp->num);
            tmp = tmp->nxtptr;
        }
    }
}

void insertionAtBeeginning()
{
    int num;
    printf("insert element to add at starting \n");
    scanf("%d", &num);

    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("cannot allocate memory \n");
    }else{
        newNode->num = num;
        newNode->nxtptr = stnode;
        stnode=newNode;
    }
}

void insertionAtEnd(){
    int num;
    printf("insert element to add at ending \n");
    scanf("%d",&num);

    struct node *newNode,*tmp;
    newNode = (struct node *)malloc(sizeof(struct node));

    if(newNode == NULL){
        printf("cannot allocate memory \n");
    }else{
       tmp=stnode;
       while(tmp->nxtptr != NULL){
            tmp=tmp->nxtptr;
       }
       newNode->num=num;
       newNode->nxtptr=NULL;
       tmp->nxtptr=newNode;
       
    }
}

void insertionAtPostion(){
    int num,toInsertAt,i=0;
    printf("enter element to insert \n");
    scanf("%d",&num);
    printf("enter position to insert  At\n");
    scanf("%d",&toInsertAt);

    struct node *newNode,*tmp,*prev;

    newNode = (struct node *)malloc(sizeof(struct node));

    if(newNode == NULL){
        printf("cannot allocate memory \n");
    }else{
        tmp=stnode;
        while(i != toInsertAt){
            if(tmp->nxtptr == NULL){
                printf("entered position is out of boundation of linked list \n");
                return;
            }
            prev=tmp;
            tmp=tmp->nxtptr;
            i++;
        }

        // printf("prev node at--%d",prev->num);
        // printf("nxt node at--%d",tmp->num);

        newNode->num=num;

        prev->nxtptr=newNode;
        newNode->nxtptr=tmp;
    }
}

void inverseOfLinkedList(){
    struct node *tmp,*prevNode=NULL,*curNode;
    tmp=stnode;
    if(tmp == NULL){
        printf("linked List is empty");
    }else{
        while(tmp != NULL){
            // tmp=tmp->nxtptr;
            curNode=tmp;
            tmp=tmp->nxtptr;

            curNode->nxtptr=prevNode;
            //previous postion
            prevNode=tmp;
            

            //current position will point at previous postion
            curNode->nxtptr=prevNode;
        }
        stnode=curNode;
        prevNode->nxtptr=tmp;

    }
}


int deleteFromStart(){
    struct node *tmp,*first;
    if(stnode == NULL){
        printf("linked list is empty \n");
        return 0;
    }else{
        tmp=stnode;
        if(tmp->nxtptr == NULL){
            free(tmp);
            
        }else{
            first=tmp;
            tmp=tmp->nxtptr;
            free(first);
            stnode=tmp;
        }
    }
}

int deleteFromEnd(){
    struct node *tmp,*prev;
    if(stnode == NULL){
        printf("linked list is empty \n");
        return 0;
    }else{
        tmp=stnode;
        if(tmp->nxtptr == NULL){
            free(tmp);
            
        }else{
            while(tmp->nxtptr != NULL){
                prev=tmp;
                tmp=tmp->nxtptr;
            }
            prev->nxtptr=NULL;
            free(tmp);
        }
    }
}

int deleteFromPostion(int pos){
    struct node *tmp,*prev, *next;
    
    if(stnode == NULL){
        printf("linked list is empty \n");
        return 0;
    }else{
        tmp=stnode;
        if(tmp->nxtptr == NULL){
            //if first node
            free(tmp);
            
        }else{
            for(int i=1;i<pos;i++){
                if(tmp->nxtptr != NULL){
                    //previos node from tmp
                    prev=tmp;
                    //tmp node
                    tmp=tmp->nxtptr;
                    //next node from tmp
                    next=tmp->nxtptr;
                    
                }else{
                    printf("entered size is greater than list size--\n");
                    prev=NULL;
                    next=NULL;
                    break;
                }
            }
            
            if(prev != NULL && next != NULL){
                prev->nxtptr=next;
                free(tmp);
            }
        }
    }
}
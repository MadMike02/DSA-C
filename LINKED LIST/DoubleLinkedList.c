#include <stdio.h>
#include <stdlib.h>

void createList(int size);
void printListFromStart();
void printListFromEnd();
void insertionAtStart();
void insertionAtEnd();
void insertionAtPosition();
int getListSize();

struct node
{
    int num;
    struct node *back;
    struct node *front;
}*head,*tail;


void main(){
   int n,sel;
    printf("enter number of nodes -- \n");
    scanf("%d", &n);
    createList(n);
    printf("Press 1 to display from start or 2 from ending\n");
    printf("Press 3 to insert at start or 4 to insert at ending\n");
    printf("Press 5 to insert at a position\n");
    
    scanf("%d",&sel);

    switch (sel)
    {
    case 1:
        printf("------------From Starting List--------\n");
        printListFromStart();
        break;
    case 2:
        printf("------------From Ending List--------\n");
        printListFromEnd();
        break;
    case 3:
        printf("------------Inserting at starting--------\n");
        insertionAtStart();
        printf("------------Updated List--------\n");
        printListFromStart();
        break;
    case 4:
        printf("------------Inserting at ending--------\n");
        insertionAtEnd();
        printf("------------Updated List--------\n");
        printListFromStart();
        break;
    case 5:
        printf("------------Inserting at position--------\n");
        insertionAtPosition();
        printf("------------Updated List--------\n");
        printListFromStart();
        break;
    
    default:
        printf("please enter a valid option\n");
        break;
    }
    
}

void createList(int size){
    struct node *fnNode, *tmp;
    int num, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("cannot allocate memory\n");
    }else{
        printf("enter data for 1st node \n");
        scanf("%d", &num);
        
        head->num = num;
        head->front = NULL;
        head->back= NULL;

        tail = head;
        tmp = head;

        for(int i=2;i<=size;i++){
            
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf("cannot allocate memory\n");
                break;
            }
            else
            {
                printf("enter data for %d node \n",i);
                scanf("%d", &num);

                fnNode->num = num;
                fnNode->front = NULL;
                fnNode->back = tmp;

                tmp->front = fnNode;
                tmp = tmp->front;
                tail=tmp;
            }


        }
    }
}

void printListFromStart(){
    struct node *tmp;
    if (head == NULL && tail == NULL)
    {
        printf("empty list");
    }
    else
    {
        tmp = head;
        while (tmp != NULL)
        {
            printf("data = %d \n", tmp->num);
            tmp = tmp->front;
        }
    }
}

void printListFromEnd(){
    struct node *tmp;
    if (head == NULL && tail == NULL)
    {
        printf("empty list");
    }
    else
    {
        tmp = tail;
        while (tmp != NULL)
        {
            printf("data = %d \n", tmp->num);
            tmp = tmp->back;
        }
    }
}

void insertionAtStart(){
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("cannot allocate memory\n");
    }else{
        int num;
        printf("enter data to insert \n");
        scanf("%d",&num);

        newnode->num=num;
        newnode->back=NULL;
        newnode->front=head;

        head->back=newnode;
        head=newnode;

    }
    
}

void insertionAtEnd(){

    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("cannot allocate memory\n");
    }else{
        int num;
        printf("enter data to insert \n");
        scanf("%d",&num);

        newnode->num=num;
        newnode->front=NULL;
        newnode->back=tail;

        tail->front=newnode;
        tail=newnode;

    }
    
}

void insertionAtPosition(){
    struct node *newnode,*tmp,*neigh;
    int curPos;

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("cannot allocate memory\n");
    }else{
        int num,pos;
        printf("enter data to insert \n");
        scanf("%d",&num);
        printf("enter position to insert at \n");
        scanf("%d",&pos);
    

        newnode->num=num;
        newnode->front=NULL;
        newnode->back=NULL;

        int listSize = getListSize();
        int listMid = listSize/2;
        
        if(pos <= listMid ){
            // printf("start\n");
            //starting at head
            tmp = head;
            curPos=1;
            while(curPos < pos){
                curPos++;
                neigh=tmp;
                tmp=tmp->front;
            }
            //previous node
            neigh->front=newnode;
            newnode->front=tmp;

            tmp->back=newnode;
            newnode->back=neigh;
        }else{
            // printf("end\n");
            //starting at ending
            tmp = tail;
            curPos=listSize;

            while(curPos >= pos){
                curPos--;
                neigh=tmp;
                tmp=tmp->back;
            }
            //previous node
            neigh->back=newnode;
            newnode->back=tmp;

            tmp->front=newnode;
            newnode->front=neigh;
        }

    }
}

int getListSize(){
    struct node *tmp;
    tmp=head;
    if(tmp == NULL){
        return 0;
    }else{
        int count=0;
        while(tmp != NULL){
            count++;
            tmp=tmp->front;
        }
        return count;
    }
}
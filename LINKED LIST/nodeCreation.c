#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nxtptr;
}*stnode;

void createNodeList(int n);
void displayList();

void main(){
    int n;
    printf("enter number of nodes -- \n");
    scanf("%d",&n);
    createNodeList(n);
    displayList();
}

void createNodeList(int n){
    struct node *fnNode, *tmp;
    int num,i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL){
        printf("cannot allocate memory\n");
    }else{
        printf("enter data for 1st node \n");
        scanf("%d",&num);
        stnode->num=num;
        stnode->nxtptr=NULL;
        tmp=stnode;

        for(int i=2;i<=n;i++){
            fnNode=(struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL){
                printf("cannot allocate memory\n");
                break;
            }else{
                printf("enter data for node -- %d \n",i);
                scanf("%d",&num);
                fnNode->num=num;
                fnNode->nxtptr=NULL;

                tmp->nxtptr=fnNode;
                tmp=tmp->nxtptr;
            }
        }
    }
}

void displayList(){
    struct node *tmp;
    if(stnode == NULL){
        printf("empty list");

    }else{
        tmp=stnode;
        while(tmp != NULL){
            printf("data = %d \n",tmp->num);
            tmp=tmp->nxtptr;
        }
    }
}

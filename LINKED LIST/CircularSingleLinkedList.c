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

// int deleteFromStart(){
//     struct node *tmp,*first;
//     if(head == NULL){
//         printf("linked list is empty \n");
//         return 0;
//     }else{
//         tmp=head;
//         if(tmp->next == NULL){
//             free(tmp);
            
//         }else{
//             first=tmp;
//             tmp=tmp->next;
//             free(first);
//             head=tmp;
//         }
//     }
// }

// int deleteFromEnd(){
//     struct node *tmp,*prev;
//     if(head == NULL){
//         printf("linked list is empty \n");
//         return 0;
//     }else{
//         tmp=head;
//         if(tmp->next == NULL){
//             free(tmp);
            
//         }else{
//             while(tmp->next != NULL){
//                 prev=tmp;
//                 tmp=tmp->next;
//             }
//             prev->next=NULL;
//             free(tmp);
//         }
//     }
// }

// int deleteFromPostion(int pos){
//     struct node *tmp,*prev, *next;
    
//     if(head == NULL){
//         printf("linked list is empty \n");
//         return 0;
//     }else{
//         tmp=head;
//         if(tmp->next == NULL){
//             //if first node
//             free(tmp);
            
//         }else{
//             for(int i=1;i<pos;i++){
//                 if(tmp->next != NULL){
//                     //previos node from tmp
//                     prev=tmp;
//                     //tmp node
//                     tmp=tmp->next;
//                     //next node from tmp
//                     next=tmp->next;
                    
//                 }else{
//                     printf("entered size is greater than list size--\n");
//                     prev=NULL;
//                     next=NULL;
//                     break;
//                 }
//             }
            
//             if(prev != NULL && next != NULL){
//                 prev->next=next;
//                 free(tmp);
//             }
//         }
//     }
// }
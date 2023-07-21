#include <stdio.h>

void enqueue();
void dequeue();
void front();
void rear();
void display();

int queue[100], size, ch, fr=-1, rr=-1;

int main(){
    printf("Enter the size of Queue \n");
    scanf("%d", &size);
    
    
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
    if(rr == size-1){
        printf("Queue is overflow !\n");
        return;
    }else{
        int num;
        printf("enter element to enter \n");
        scanf("%d", &num);
        if(rr == -1){
            fr=0;
        }
        queue[++rr] = num;
    }
}

void dequeue(){
    printf("---------------------dequeue--------------------------\n");

    if(fr == size-1 || fr == -1){
        printf("Queue is underflow !\n");
        return;
    }else{
        int item = queue[fr++];
        size++;
        printf("dequeue %d from the queu\n", item);
    }
}

void front(){
    printf("---------------------front--------------------------\n");

    printf("Front is %d \n",queue[fr]);
}

void rear(){
    printf("---------------------rear--------------------------\n");

    printf("Rear is %d \n",queue[rr]);
}

void display(){
    printf("---------------------display--------------------------\n");

    if(fr == size-1){
        printf("Queue is underflow !\n");
        return;
    }else{
        for(int i = fr; i<= rr;i++){
            printf("Element is :%d\n",queue[i]);
        }
    }
}
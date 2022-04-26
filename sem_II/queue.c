#include<stdio.h>
#define SIZE 5

int queue_arr[SIZE], front = -1, rear = -1, elm;

void insert() {

    if(rear == SIZE-1) 
        printf("Queue overflow!\n");
    else {
        printf("Enter the element to be inserted : ");
        scanf("%d",&elm);
        if(front == -1 || rear == -1) 
            front = rear = 0; 
        else 
            rear++;
        queue_arr[rear] = elm;
    }
    
}
void delete() {
    if(front == -1 || front > rear) 
        printf("Queue Underflow!\n");
    else {
        elm = queue_arr[front];
        front++;
        printf("%d has been poped from the queue!\n",elm);
    }

}
void display() {
    int idx;
    if(front == -1 || rear == -1 || front > rear) {
        printf("Queue is empty!");
    } else {
        for(idx = front; idx <= rear; ++idx) 
            printf("-> %d ",queue_arr[idx]);
    }
    printf("\n");
}

void main() {
    int choice, pushChoice, idx;
    do{
        printf("\nPlease choose the Queue operation to perform:\n1 ► insert ╬ 2 ► delete ╬ 3 ► display ╬ 4 ► EXIT : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("\ninitiating insert operation...\n");
                    insert();
                    break;

            case 2: printf("\ninitiating delete operation...\n\n");
                    delete();
                    break;

            case 3: printf("\nDisplaying Queue Elements...\n\n");
                    display(); 
                    break;

            case 4: break;
            default: printf("Invalid input\n");
        }   

    } while(choice !=  4);
}
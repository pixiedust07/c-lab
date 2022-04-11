#include<stdio.h>
#define SIZE 5

int stack_arr[SIZE], topPos = -1, isFull = 0;
void push() {
    int elm;
    if(topPos == SIZE-1) {
        printf("Stack overflow!\n");
        isFull = 1;
    } else {
        printf("Enter the element to push : ");
        scanf("%d",&elm);
        topPos++;
        stack_arr[topPos] = elm;
    }

}
void pop() {
    printf("initiating pop operation...\n\n");
}
void peek() {
    printf("initiating peek operation...\n\n");
}
void display() {
    int i;
    printf("Displaying Stack Elements...\n\n");
    for(i = 0; i < SIZE; i++) {
        printf("%d ",stack_arr[i]);
    }
}

void main() {
    int choice, popChoice, idx;
    do{
        printf("\nPlease choose the method of search or exit:\n1 ► push ╬ 2 ► pop ╬ 3 ► peek ╬ 4 ► display ╬ 5 ► EXIT : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: popChoice;
                    printf("initiating push operation...\n");
                    printf("\nwould you like to enter the elements :\n1 ► altogether ╬ 2 ► one by one : ");
                    scanf("%d",&popChoice);
                    if(popChoice == 1) {
                        if(isFull == 1) 
                            printf("Stack overflow!\n");
                        for(idx = 0; idx <= SIZE; idx++) {
                            if(topPos < SIZE && isFull != 1)
                                push();   
                        }
                    } else if(popChoice == 2) {
                        push();
                    }else {
                        printf("Invalid Input!\n");
                    }break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: break;
            default: printf("Invalid input\n");
        }   

    } while(choice !=  5);
}
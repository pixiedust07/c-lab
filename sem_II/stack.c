#include<stdio.h>
#define SIZE 5

int stack_arr[SIZE], topPos = -1, isFull = 0;
void push() {
    int elm;
    if(topPos == SIZE-1) {
        printf("Stack overflow!\n");
        isFull = 1;
    } else {
        printf("-> Enter the element to push : ");
        scanf("%d",&elm);
        topPos = topPos + 1;
        stack_arr[topPos] = elm;
    }

}
void pop() {
    int elm;
    if(topPos == -1) 
        printf("Stack Underflow!");
    else {
        elm = stack_arr[topPos];
        topPos = topPos - 1;
        printf("-> %d has been popped from the array!\n", elm);
    }
}
void peek() {
    int elm;
    if(topPos == -1) 
        printf("Stack is Empty!");
    else {
        elm = stack_arr[topPos];
        printf("-> The last element in the stack is %d\n", elm);
        isFull = 0;
    }
}
void display() {
    int i;
    if(topPos == -1) 
        printf("Stack is Empty!");
    else 
        for(i = 0; i <= topPos; i++) 
            printf("-> %d ",stack_arr[i]);
    printf("\n");
}

void main() {
    int choice, popChoice, idx;
    do{
        printf("\nPlease choose the stack operation to perform:\n1 ► push ╬ 2 ► pop ╬ 3 ► peek ╬ 4 ► display ╬ 5 ► EXIT : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("initiating push operation...\n");
                    printf("\nHow would you like to enter the elements ? 1 ► altogether ╬ 2 ► one by one : ");
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

            case 2: printf("initiating pop operation...\n\n");
                    pop();
                    break;

            case 3: printf("initiating peek operation...\n\n");
                    peek();
                    break;

            case 4: printf("Displaying Stack Elements...\n\n");
                    display(); 
                    break;

            case 5: break;
            default: printf("Invalid input\n");
        }   

    } while(choice !=  5);
}
#include<stdio.h>

int size, arr[10];

void linearSearch(int nums[], int size) {
    printf("initiating linearSearch");
}
void binarySearch(int nums[], int size) {
    //sort the array first
    printf("initiating binarySearch");
}

void main() {
    int choice, index;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(index = 0; index < size; index++) {
        scanf("%d",&arr[index]);
    }

    do{
        printf("\n\nPlease choose the method of search :\n1 ► linearSearch ╬ 2 ► binarySearch ╬ 3 ► EXIT : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: linearSearch(arr, size); break;
            case 2: binarySearch(arr, size); break;
            case 3: break;
            default: printf("Invalid input");
        }

    } while(choice !=  3);
}
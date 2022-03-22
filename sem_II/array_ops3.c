#include<stdio.h>

int arr[10], size, pos, elm, array_exists = 0;

void create() {
    int index;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(index = 0; index < size;index++) {
        scanf("%d",&arr[index]);
    }
    array_exists = 1;
}
void insert() {
    printf("Array exist = %d",array_exists);
    int index = size;
    printf("Enter the position of the Element to be Inserted [Array position starts at '0']: ");
    scanf("%d",&pos);
    printf("Enter the element to be inserted : ");
    scanf("%d",&elm);
    //If the position entered by the user is greater than the size of the array we need to exit the loop.
    while(index >= pos) {
        arr[index+1] = arr[index];
        index--;
    }
    //size++ = []to not affect the array elements on execution any other function] since we add a new element, the size of the newly modified array = size++
    size++;
    arr[pos] = elm;
    printf("%d has been Inserted to the Array at position %d!",elm,pos);
}
void delete() {
    int index;
    printf("Enter the position of the Element to be Deleted [Array position starts at '0']: ");
    scanf("%d",&pos);
    index = pos;
    elm = arr[pos];
    while(index <= size) {
        arr[index] = arr[index+1];
        index++;
    }
    //since we delete a new element, the size of the newly modified array = size--
    size--;
    printf("%d has been deleted from the Array!",elm);
}

void display() {
    int index, sum = 0;
    printf("The array elements are : ");
    for(index = 0; index < size;index++) {
        printf("%d ",arr[index]);
    }
}

void showError() {
    printf("\tYou should create an array first");
}

void main() {
    int choice;
    do {
        printf("\n\n----------------------Array Operations----------------------\n\n");
        printf("Please Choose an Operation to perform from the given list : \n\n1 ► CREATE ╬  2 ► INSERT  ╬  3 ► DELETE  ╬  4 ► DISPLAY  ╬  5 ► EXIT\n");
        printf("Your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : create(); break;
            case 2 : array_exists == 1 ? insert() : showError();  break;
            case 3 : array_exists == 1 ? delete() : showError();  break;
            case 4 : array_exists == 1 ? display() : showError();  break;
        }
    } while(choice != 5);
}

// program to Read and print an array
#include<stdio.h>

void display() {
    int arr[10],index, size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(index = 0; index < size;index++) {
        scanf("%d",&arr[index]);
    }

    printf("The array elements are : ");
    for(index = 0; index < size;index++) {
        printf("%d ",arr[index]);
    }

}

void main() {

    display();
}

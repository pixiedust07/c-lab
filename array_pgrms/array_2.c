// program to store 'n' number of array elements and display it
#include<stdio.h>

int main() {
    int ar[100], index, size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the array elements : ");
    for (index = 0; index < size; index++) {
        scanf("%d", &ar[index]);
    }

    printf("The array elements are: ");
    for (index = 0; index < size; index++) {
        printf(" %d ", ar[index]);
    }
}
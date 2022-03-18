// pgrm to read an array of 5 elements and display it's output
#include<stdio.h>

int main() {
    int ar[100], index;
    printf("Enter the array elements : ");
    for(index = 0; index < 5; index++) {
        scanf("%d", &ar[index]);
    }

    printf("The array elements are: ");
    for(index = 0; index < 5; index++) {
        printf(" %d ",ar[index]);
    }
}
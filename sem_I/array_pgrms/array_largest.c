// program to find the largest number in an array

#include <stdio.h>

int main()
{
    int ar[100], index, size, largest = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the array elements : ");
    for (index = 0; index < size; index++) {
        scanf("%d", &ar[index]);
    }

    for (index = 0; index < size - 1; index++) {
        if(ar[0] <= ar[index]) {
            largest = ar[index];
        }
    }
    printf("Largest element in the array is : %d", largest);
}
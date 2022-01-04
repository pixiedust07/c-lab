// program to take 'n' number of array elements and display it in reverse order

#include <stdio.h>

int main()
{
    int ar[100], index, size = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the array elements : ");
    for (index = 0; index < size; index++)
    {
        scanf("%d", &ar[index]);
    }

    printf("The array elements in reverse order are: ");
    for (index = size - 1; index >= 0; index--)
    {
        printf(" %d ", ar[index]);
    }
}
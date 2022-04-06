#include<stdio.h>

int size, arr[10], pos = -1;

void selectionSort(int nums[], int size) {
    printf("initiating Selection Sort...");
   int i, j, position, swap;
   for (i = 0; i < (size - 1); i++) {
      position = i;
      for (j = i + 1; j < size; j++) {
         if (nums[position] > nums[j])
            position = j;
      }
      if (position != i) {
         swap = nums[i];
         nums[i] = nums[position];
         nums[position] = swap;
      }
   }
   for (i = 0; i < size; i++)
      printf("%d ", nums[i]);
}

void bubbleSort(int nums[], int size) {
    printf("bubble Sort is unavailable!");
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
        printf("\n\nPlease choose the method of sort or exit:\n1 ► selectionSort ╬ 2 ► bubblesort ╬ 3 ► EXIT : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: selectionSort(arr, size); break;
            case 2: bubbleSort(arr, size); break;
            case 3: break;
            default: printf("Invalid input");
        }

    } while(choice !=  3);
}
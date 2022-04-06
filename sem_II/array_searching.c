#include<stdio.h>

int size, arr[10], pos = -1;

void linearSearch(int nums[], int size, int elm) {
    printf("initiating linearSearch");
}
void binarySearch(int nums[], int size, int elm) {
    int start = 0, end = size, mid = 0; 
    //sort the array first
    printf("initiating binarySearch...\n");
    while(start <= end) {
        mid = (end + start) / 2;
        if(nums[mid] == elm) {
            pos = mid;
            printf("%d was found at position %d. Search Successful!\n",elm,pos+1);
            //printf("Pos = %d", pos);
            break;
        } else if(nums[mid] > elm) {
            end = mid-1;
        } else {
            start = mid+1;
        }
        pos = -1;
    }
        if(pos == -1){
            printf("%d was not found. Search Unsuccessful!\n",elm);
        }
}

void main() {
    int choice, index,elm;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(index = 0; index < size; index++) {
        scanf("%d",&arr[index]);
    }

    do{
        printf("\n\nPlease choose the method of search or exit:\n1 ► linearSearch ╬ 2 ► binarySearch ╬ 3 ► EXIT : ");
        scanf("%d",&choice);
        if(choice != 3 && choice < 3) {
            printf("\nEnter the element to be searched: ");
            scanf("%d",&elm);
        }

        switch(choice){
            case 1: linearSearch(arr, size, elm); break;
            case 2: binarySearch(arr, size, elm); break;
            case 3: break;
            default: printf("Invalid input");
        }

    } while(choice !=  3);
}
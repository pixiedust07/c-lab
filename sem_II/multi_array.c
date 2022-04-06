// program to Read and print an array
#include<stdio.h>

void main() {
    int arr[10][10], i, j, row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("Enter the elements of the array: ");
    for(i = 0; i < row; i++) {
        for(j = 0;j < col; j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The array elements are : ");
    for(i = 0; i < row; i++) {
        printf("\n");
        for(j = 0;j < col; j++) {
            printf("%d ",arr[i][j]);
        }
    }
}

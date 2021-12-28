/*
pattern 1 :
    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4 
    5
*/

#include <stdio.h>

int main()
{
    int rowIndex, colIndex, limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    for (rowIndex = 1; rowIndex <= limit; rowIndex++) {
        for (colIndex = limit; colIndex >= rowIndex; colIndex--) {
            printf(" %d ", rowIndex);
        }
        printf("\n");
    }
}
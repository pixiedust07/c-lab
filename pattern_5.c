/*
pattern 1 :
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include <stdio.h>

int main()
{
    int rowIndex, colIndex, limit, res;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    for (rowIndex = 1; rowIndex <= limit; rowIndex++) {
        for (colIndex = limit; colIndex >= rowIndex; colIndex--) {
            res = (limit - colIndex) + rowIndex;
            printf(" %d ", res);
        }
        printf("\n");
    }
}
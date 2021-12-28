/*
pattern 3 :
    * * * * *
    * * * *
    * * * 
    * *
    * 
*/

#include <stdio.h>

int main()
{
    int rowIndex, colIndex, limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    for (rowIndex = 0; rowIndex < limit; rowIndex++)
    {
        for (colIndex = limit; colIndex > rowIndex; colIndex--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int index, number, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    for (index = 1; index <= number; index++) {
        if(number % index == 0) {
            if(index != number) {
                sum = sum + index;
            }
        }
    }
    if(sum == number) {
        printf("%d is a perfect number ", number);
    } else {
        printf("%d is not a perfect number", number);
    }
}
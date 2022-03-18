#include <stdio.h>

int main()
{
    int index, num, primeCount = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (index = 1; index <= num; index++) {
        if (num % index == 0) {
            primeCount++;
        }
    }
    if (primeCount == 2) {
        printf("%d is prime", num);
    } else {
        printf("%d is not prime", num);
    }

}
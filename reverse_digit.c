#include <stdio.h>

int main()
{
    int number, rev_num = 0, zeroCount = 0, index;
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("You Entered : %d\n", number);
    if(number < 0) {
        // convert when the input number is negative
        number *= -1;
    }
    while (number != 0) {
        rev_num = 0 + (rev_num * 10) + (number % 10);
        // get the number of trailing zeros
        if(rev_num == 0) {
            zeroCount++;
        }
        number /= 10;
    }
    // with zeroCount as the loop condition to append 0's before printing
    printf("It's reverse : \n");
    for ( index = 0; index < zeroCount; index++) {
        printf("0");
    }
    printf("%d", rev_num);
    
}
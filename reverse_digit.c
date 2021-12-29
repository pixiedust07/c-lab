#include <stdio.h>

int main()
{
    int number, rev_num = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("You Entered : %d\n", number);
    while (number != 0) {
        rev_num = (rev_num * 10) + (number % 10);
        number /= 10;
    }
    printf("It's reverse : %d", rev_num);
}
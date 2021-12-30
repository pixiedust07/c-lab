#include<stdio.h>

int main() {
    int number, reversedNum = 0, initialNum;
    printf("Enter a number : ");
    scanf("%d",&number);
    initialNum = number;
    while(number != 0) {
        reversedNum = (reversedNum * 10) + (number % 10);
        number /= 10;
    }
    reversedNum == initialNum ? printf("%d is palindrom", initialNum) : printf("%d is not palindrom", initialNum);
}
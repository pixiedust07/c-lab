#include<stdio.h>

int main() {
    int number, initialValue, digitCube = 0; 
    printf("Enter the number : ");
    scanf("%d",&number);
    initialValue = number;
    while(number != 0) {
        // On each iteration *digitCube will be assigned the cube of the last digit of the *number and will be added to the previous value in *digitCube
        digitCube += ((number % 10) * (number % 10) * (number % 10));
        number /= 10;
    }
    if(initialValue == digitCube) {
        printf("%d is amstrong",initialValue);
    }else {
        printf("%d is not amstrong",initialValue);
    }
}
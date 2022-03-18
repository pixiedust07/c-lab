/*
A menu driven program for the following problems : 
1) Factorial of a number
2) Prime or not
3) odd or even
4) quit
*/

#include<stdio.h>

int main() {
    int inputNum, choice, fact = 1, index, primeCount = 0;
    while(choice != 4) {
        printf("Please select an option to continue :\n\n1 - Factorial of the number\n2 - Prime or not\n3 - Odd or even\n4 - EXIT\n");
        scanf("%d",&choice);
        if(choice > 4 || choice <= 0) {
            printf("Aborting due to invalid input");
            choice = 4;
        }
        if (choice != 4 && choice != 0){
            printf("Enter a number : ");
            scanf("%d", &inputNum);
        }
        switch (choice) {
        case 1:
            // factorial of a number 5 - 5x4x3x2x1 = 0
            for(index = inputNum; index > 0;index--){
                fact *= index;
            }
            printf("\n\n-------------------------------------\n");
            printf("\n\tFactorial of %d = %d", inputNum, fact);
            printf("\n\n-------------------------------------\n");
            break;
        case 2:
            // prime or not
            for(index = 1; index <= inputNum; index++) {
                if(inputNum % index == 0) {
                    primeCount++;
                }
            }
            printf("\n\n-------------------------------------\n");
            if (inputNum <= 1) {
                printf("\n\t1 or any numbers below it are neither prime nor composite");
            } else {
                if (primeCount == 2) {
                    printf("\n\t%d is prime", inputNum);
                }
                else {
                    printf("\n\t%d is not prime", inputNum);
                }
            }
            printf("\n\n-------------------------------------\n");
            break;
        case 3:
            printf("\n\n-------------------------------------\n");
            if(inputNum == 0) {
                printf("\n\t0 is neither even nor odd");
            }else if (inputNum % 2 == 0) {
                printf("\n\t%d is even", inputNum);
            } else {
                printf("\n\t%d is odd", inputNum);
            }
            printf("\n\n-------------------------------------\n");
            break;
        case 4:
            choice = 4;
            printf("\n\n-------------------Closing program-----------------------\n\n");
            break;
        
        default:
            printf("Invalid input");
            break;
        }
    }
}
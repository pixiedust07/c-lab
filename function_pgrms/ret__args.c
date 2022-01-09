// program to find the age from Birthyear -- with argument with return value
#include<stdio.h>

int getAge(int birthYear) {
    int currentAge;
    currentAge = 2022 - birthYear;
    return currentAge;
}

void main() {
    int birthYear;
    printf("Enter your birthYear : ");
    scanf("%d",&birthYear);
    printf("You are %d years old in 2022", getAge(birthYear));
}
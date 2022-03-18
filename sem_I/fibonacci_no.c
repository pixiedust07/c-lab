#include<stdio.h>

int main() {
    int num, index, head = 0, tail = 1, mean = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    // 0 1 1 2 3 5 8 13....
    printf("Fibonacci series of %d is",num);
    for(index = 0; index <= num; index++) {
        printf(" %d ", head);
        mean = head + tail;
        head = tail;
        tail = mean;
    }
}
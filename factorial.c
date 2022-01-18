#include <stdio.h>

int main() {
	int num,idx,fact=1;
	printf("Enter a number:");
	scanf("%d",&num);
	for(idx=num;idx>0;idx--) {
		fact=fact*idx;
	}
	printf("Factorial of %d is %d",num,fact);
	return 0;
}

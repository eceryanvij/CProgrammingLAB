//This program is to perform all the arithmetic operations on two numbers.

#include <stdio.h>

int main() {
	
	int num1, num2;
	printf("Enter number 1 :");
	scanf("%d", &num1);
	printf("Enter number 2 :");
	scanf("%d", &num2);
	printf("Sum : %d Difference : %d Product : %d Division:%d Modulo: %d", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);
	return 0;
}


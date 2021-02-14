// Joviane Bellegarde
// Used this resource for the parens. 
// I knew about ternary operators from Java, but wasn't aware of paren placement.
// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/
//
//
#include <stdio.h>

#define MINOF2(num1, num2) ((num1) < (num2) ? (num1) : (num2))

int main() {

	printf("Enter two numbers: \n");
	
	int number1;
	int number2;
	scanf("%d%d", &number1, &number2);
		
	printf("Numbers %d and %d\n", number1, number2);
	printf("The minimum of %d and %d is: %d\n", number1, number2, MINOF2(number1, number2));
	
	return 0;
}

// Joviane Bellegarde
//
//
//
# include <stdio.h>


int main() {

	int x = 4;
	printf("x is stored at %p\n", &x);
	
	int *address_of_x = &x;
	printf("the address of x is %p\n", address_of_x);

	int value_stored = *address_of_x;
	printf("the value of x is %d\n", value_stored);

	*address_of_x = 99;
	printf("The value of x is %d\n", *address_of_x);
}

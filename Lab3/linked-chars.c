// Joviane Bellegarde
//
//
//
# include <stdio.h>


typedef struct alphabet {
	char* letter;
	int position;
}alphabet;



int main() {

	FILE* filePointer;
	filePointer = fopen("alphabet.txt", "r");
	
	while(1 == fscanf(filePointer, "%c", &buffer)) {
		
	
	}
	

	alphabet character;
	alphabet.letter = "a";
	alphabet.position = 1;
	
	printf("Letter: %c\n", alphabet.letter);
	printf("Position %d\n", position);
	/*
	int x = 4;
	printf("x is stored at %p\n", &x);
	
	int *address_of_x = &x;
	printf("the address of x is %p\n", address_of_x);

	int value_stored = *address_of_x;
	printf("the value of x is %d\n", value_stored);

	*address_of_x = 99;
	printf("The value of x is %d\n", *address_of_x);
	*/

	return 0;	
}

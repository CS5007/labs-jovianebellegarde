// Joviane Bellegarde
//
//


#include <stdio.h>
#include <string.h>


void find_occurance(char* haystack, char* needle) {
//	printf("Needle: %s\n", needle);
//	printf("Haystack: %s\n", haystack);
	
	char* position = strstr(haystack, needle);
	
	if (position) {
		printf("yes\n");		
	} else {
		printf("Occurance not found!\n");
	}
}	



int main() {

	printf("Time to play Needle in a Haystack!\n");

	char haystack[] = "Hello, welcome to CS5007!";
	char needle1[] = "el";
	char needle2[] = "Jovi";
	
//	find_occurance(haystack, needle1);
	find_occurance(haystack, needle2);

	return 0;
}





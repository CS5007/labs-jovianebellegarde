// Joviane Bellegarde
//
//


#include <stdio.h>
#include <string.h>


void find_occurance(char* haystack, char* needle) {
	char* position = strstr(haystack, needle);
	
	// the only works for first position :/
	/*
	if (position) {
		printf("Occurrence found at position: %ld\n", position - haystack);	
	} else {
		printf("Occurrence not found!\n");
	}
	*/
	
	int occurrence = 0;
	for (int i = 0; i <= strlen(haystack); i++) {
		if (haystack[i] && haystack[i + 1] == needle[i] && needle[i + 1]) {
			occurrence++;
			printf("Found %d occurrences of the substring: %s\n",occurrence, needle);
			printf("Occurence found at position: %d\n", haystack[i]);
		} else {
			printf("Occurence not found!\n");
		}
	}
	
}	


int main() {

	printf("Time to play Needle in a Haystack!\n");

	char haystack[] = "Hello, welcome to CS5007!";
	char needle1[] = "el";
	char needle2[] = "Jovi";
	
	find_occurance(haystack, needle1);
	find_occurance(haystack, needle2);

	return 0;
}





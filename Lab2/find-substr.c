// Joviane Bellegarde
// Used https://cboard.cprogramming.com/c-programming/73365-how-use-strstr-find-all-occurrences-substring-string-not-only-first.html
// as reference!
//


#include <stdio.h>
#include <string.h>


void find_occurance(char* haystack, char* needle) {
	//char* position = strstr(haystack, needle);
	
	// the only works for first position 

	int count = 0;
	
	while ((haystack = strstr(haystack, needle)) != NULL) {
		haystack += strlen(needle);
		count++;
		}	
	printf("Found %d occurrences of the substring:'%s'\n", count, needle);
}


int main() {

	printf("Time to play Needle in a Haystack!\n");

	char haystack[] = "Hello, welcome to CS5007!";
	char needle1[] = "el";
	char needle2[] = "Jovi";
	
	find_occurance(haystack, needle1);
	//find_occurance(haystack, needle2);

	return 0;
}





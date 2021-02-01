// Joviane Bellegarde
// Used https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm for reference


#include <stdio.h>
#include <string.h>


void find_occurance(char* haystack, char* needle) {
	int count = 0;

	// looping through the length of the haystack string
	for (int i = 0; i<= strlen(haystack); i++) {

		// looping through the first matched character in substring
		if (haystack[i] == needle[0]) {

			// looping through the second matched character in substring
			if (haystack[i + 1] == needle[1]) {
				++count;
				printf("Occurrence found at position %d\n", i);
		
			} else {
				printf("Occurrence not found!\n");
				break;
			}
		}
	}
	printf("Found %d occurrences of the substring: '%s' in %s\n", count, needle, haystack);
}	


int main() {

	printf("Time to play Needle in a Haystack!\n\n");

	char haystack[] = "Hello, welcome to CS5007!";
	char needle1[] = "el";
	char needle2[] = "Jovi";
	
	find_occurance(haystack, needle1);
	find_occurance(haystack, needle2);

	return 0;
}




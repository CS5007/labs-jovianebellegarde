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
	

	

	return 0;	
}

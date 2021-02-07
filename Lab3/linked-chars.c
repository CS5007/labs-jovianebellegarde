// Joviane Bellegarde
//
//
//
# include <stdio.h>

typedef struct ll_node {
	int position;
	char* letter;
	struct node* next;
}ll_node_t;


int main() {

	FILE* filePointer;
	filePointer = fopen("alphabet.txt", "r");
	char buffer;// holds character values
	
	struct node* alpha;
	

	while(1 == fscanf(filePointer, "%c", &buffer)) {
		struct node* next;

		 
	}
	fclose(filePointer);
	return 0;	
}

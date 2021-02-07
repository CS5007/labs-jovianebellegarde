// Joviane Bellegarde
//
//
//
# include <stdio.h>

typedef struct node{
	int letter;
	struct node* next;
}node_t;



void findCharacter(node_t* node) {
	node_t* itr = node;
	

}


int main() {

	FILE* filePointer;
	filePointer = fopen("alphabet.txt", "r");
	char buffer;// holds character values
	
	node_t nodeA;
	node_t nodeB;
	node_t nodeC;
	while(1 == fscanf(filePointer, "%c", &buffer)) {
		nodeA.letter = 'a';
		nodeB.letter = 'b';
		nodeC.letter = 'c';

		nodeA.next = &nodeB;
		nodeB.next = &nodeC;
		nodeC.next = NULL;
	}
	findCharacter(&nodeA);
	fclose(filePointer);
	return 0;	
}

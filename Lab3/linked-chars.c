// Joviane Bellegarde
//
//
//
#include <stdio.h>
#include <stdlib.h>
#define CHAR 26;

typedef struct node{
	char data;
	int position;
	struct node* next;
}node_t;

void findCharacter(node_t* node, char* character) {
	node_t* itr = node;
	while (itr != NULL) {
		if (itr == character){
			printf("found it\n");
		} else {
			printf("This character does not exist in the alphabet.\n");
		}
		itr = itr->next;
	}		

}

node_t* createNode(char data) {
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	if (newNode == NULL) {
		return NULL;	
	}
	newNode->data = data;
	//printf("Letter: %c\n", data);
	return newNode;
}

void freeNode(node_t* node) {
	if (node == NULL) {
		return;
	}
	free(node);
}

int main() {

	FILE* filePointer;
	filePointer = fopen("alphabet.txt", "r");
	char buffer;// holds character values
	
	node_t* nodeA = NULL;
	
	
	while(1 == fscanf(filePointer, "%c", &buffer)) {
		//printf("Letter: %c\n", buffer);
		
		createNode(buffer);		
	}
	//findCharacter(
	fclose(filePointer);
	freeNode(nodeA);
	return 0;	
}

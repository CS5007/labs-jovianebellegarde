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

void findCharacter(node_t* node) {
	node_t* itr = node;
		

}

node_t* makeNode(char data) {
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	if (newNode == NULL) {
		return NULL;	
	}
	newNode->data = data;
	printf("%c", data);
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
		printf("%c", buffer);
		
		makeNode(buffer);		
	}
	//findCharacter(
	fclose(filePointer);
	return 0;	
}

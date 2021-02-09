// Joviane Bellegarde
//
//
//
#include <stdio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node* next;
	int position;
}letter;


typedef struct nodeList{
        struct node* next;
	letter* head;
	letter* tail;
	// doubly linked list --> want to know what comes before and after with DLL
	
}alphabet;



node_t* createNode(char data, alphabet letter) {
        node_t* newNode = (node_t*)malloc(sizeof(node_t));
        if (newNode == NULL) {
                return NULL;    
        }
        newNode->data = data;
        printf("Letter: %c\n", data);
        return newNode;
}

int main() {
	
	FILE* filePointer = fopen("alphabet.txt", "r");
	
	char buffer;
	int count = 0;

//	struct node* head = NULL;
//	struct node*;

	while (1 == fscanf(filePointer, "%c\n", &buffer)) {
	//	head->data = "%c";
	//	head->next = NULL;
		
		//printf("%c\n", buffer);
		// make a createNode function
		// create add node to list function, taking 2 arguments (linked list, and buffer)
	
	}
	// ask for character input
	// findCharacter(linked list, user input)
	// create position
}

/*
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
	printf("Letter: %c\n", data);
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
//	filePointer = fopen("alphabet.txt", "r");

	filePointer = fopen("alphabet.txt", "r");
	
	int size = 26;
	char* buffer = malloc(sizeof(char*)size);
	
	
	}
	fclose(filePointer);
	node_t* nodeA = NULL;
	
	
	while(1 == fscanf(filePointer, "%c", &buffer)) {
		printf("Letter: %c\n", buffer);
		
		createNode(buffer);		
	}
	//findCharacter(
//	fclose(filePointer);
	freeNode(nodeA);
	return 0;	
}
*/

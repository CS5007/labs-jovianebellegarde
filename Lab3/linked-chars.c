// Joviane Bellegarde
//
//
//
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char data;
	struct node* next;
	struct node* previous;
}letter_t;


typedef struct nodeList{
        int count;
	letter_t* head;
	letter_t* tail;
	// doubly linked list --> want to know what comes before and after with DLL
	
}alist_t;

//letter_t* createNode(char data, alphabet letter)
letter_t* createNode(char data) {
        letter_t* newNode = (letter_t*)malloc(sizeof(letter_t));
        if (newNode == NULL) {
                return NULL;    
        }
        newNode->data = data;
        //printf("Letter: %c\n", data);
       	return newNode; 
}

alist_t* makeList(letter_t* node, buffer) {
	alist_t* newList = (alist_t*)malloc(sizeof(alist_t));
	if (newList == NULL) {
		return;
	}
	newList->head = NULL;
	newList->tail = NULL;
	newList->count = 0;
	return newList;
}

void printNodes(letter_t* node) {
	letter_t* itr = node;
	while (itr  != NULL) {
		printf("Letter: %c\n", itr->data);
		itr = itr->next;
	}
	//printf("\n");
}

int main() {
	
	FILE* filePointer = fopen("alphabet.txt", "r");
	
	char buffer;
	int count = 0;

	while (1 == fscanf(filePointer, "%c\n", &buffer)) {
		
//		printf("Letter: %c\n", buffer);
		// make a createNode function
		letter_t* node = createNode(buffer);
		printNodes(node);
		//letter_t* alpha = createNode(buffer);
		// create add node to list function, taking 2 arguments (linked list, and buffer)
		alist_t* list = makeList(node, buffer);				
				
	}
	// ask for character input
	//
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

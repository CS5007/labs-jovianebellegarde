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

alist_t* makeList(letter_t* node,char buffer) {
	alist_t* newList = (alist_t*)malloc(sizeof(alist_t));
	if (newList == NULL) {
		return NULL;
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

void freeNode(letter_t* node) {
        if (node == NULL) {
                return;
        }
        free(node);
}

/*
void findCharacter(letter_t* node, char character) {
	if (node == NULL) {
		return;
	}

	while (itr != NULL) {
		if (character == node) {
			printf("Found it\n");
		}
	}
}
*/


int main() {	
	char character;
	printf("Enter a letter from a through z\n");
	scanf("%c", &character);
	
	FILE* filePointer = fopen("alphabet.txt", "r");
	
	char buffer;
	int count = 0;

	letter_t* node;
	while (1 == fscanf(filePointer, "%c\n", &buffer)) {
		
//		printf("Letter: %c\n", buffer);
		// make a createNode function
		node = createNode(buffer);
	//	printNodes(node);
		//letter_t* alpha = createNode(buffer);
		// create add node to list function, taking 2 arguments (linked list, and buffer)
		alist_t* list = makeList(node, buffer);								
	}
//	findCharacter(list, character);
	fclose(filePointer);
	freeNode(node);
//	free(node);
}


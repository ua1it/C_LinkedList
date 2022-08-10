#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* nextNode;
};
void PrintNodeFrom(struct Node* from) {
	while (from) {
		printf("노드의 데이터 : %d \n", from->data);
		from = from->nextNode;
	}
}

struct Node* InsertNode(struct Node* current, int data) {
	struct Node* after = current->nextNode;
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = data;
	newNode->nextNode = after;
	
	current->nextNode = newNode;
	return newNode;
}

void DestroyNode(struct Node* destroy,struct Node* head) {
	struct Node* next = head;
	if (destroy == head) {
		free(destroy);
		return;
	}
	while (next) {
		if (next->nextNode == destroy) {
			next->nextNode = destroy->nextNode;
		}
		next = next->nextNode;
	}
	free(destroy);
}

struct Node* CreateNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->nextNode = NULL;
	return newNode;
}
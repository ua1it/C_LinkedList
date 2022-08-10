#include "LinkedList.h"


int main() {
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	
	struct Node* Node4 = InsertNode(Node2, 400);
	PrintNodeFrom(Node1);
	return 0;
}

 
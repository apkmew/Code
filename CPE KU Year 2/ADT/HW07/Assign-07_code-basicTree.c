#include <stdio.h>
#include <stdlib.h>

// You can define your own (one or more)
// structures here. However, we eventually
// need the data type "tree_t".
// For example:
// typedef struct node {
//    ...
// } node_t;
// typedef node_t tree_t;

// Write your code here
// ...
typedef struct node{
	int value;
	node_t *firstChild,*lastChild,*nextSiblings,*parent,*prevSibling;
} node_t;
typedef node_t tree_t;
node_t* createNode(int value){
	node_t* newNode = (node_t*)malloc(sizeof(node_t));
	newNode->value = value;
	newNode->firstChild = newNode->lastChild = newNode->nextSiblings = newNode->prevSibling = NULL;
	return newNode;
}
node_t* attach(node_t* currentNode, int parent, int value){
	if(currentNode->value == parent){
		node_t* newNode = createNode(value);
		newNode->parent = currentNode;
		if(currentNode->firstChild == NULL){
			// if currentNode has no child
			// then newNode will be both firstChild and lastChild
			currentNode->firstChild = newNode;
			currentNode->lastChild = newNode;
		}else{
			// if currentNode has some child
			// create relation between newNode and lastChild
			currentNode->lastChild->nextSibling = newNode;
			newNode->prevSibling = currentNode->lastChild;
			// newNode will be lastChild
			currentNode->lastChild = newNode;
		}
		return currentNode;
	}
	//Searching process
	if(currentNode->nextSiblings != NULL)
		attach(currentNode->nextSiblings, parent, value);
	if(currentNode->firstChild != NULL)
		attach(currentNode->firstChild, parent, value);
	return currentNode;
}
node_t* detach(node_t* currentNode, int value){
	if(currentNode->value == value){
		if(currentNode->prevSibling != NULL)
			// if currentNode has no prevSibling then currentNode is not firstChild
			currentNode->prevSibling->nextSiblings = currentNode->nextSiblings;
		else
			// currentNode is firstChild
			currentNode->parent->firstChild = currentNode->nextSiblings;
		if(currentNode->nextSiblings != NULL)
			// if currentNode has not nextSibling then currentNode is not lastChild
			currentNode->nextSiblings->prevSibling = currentNode->prevSibling;
		else
			// currentNode is lastChild
			currentNode->parent->lastChild = currentNode->prevSibling;
		return currentNode;
	}
	//Searching process
	if(currentNode->nextSiblings != NULL)
		detach(currentNode->nextSiblings, value);
	if(currentNode->firstChild != NULL)
		detach(currentNode->firstChild, value);
	return currentNode;
}
int search(node_t* currentNode,int value){
	if(currentNode->value == value)	return 1;
	//Searching process
	if(currentNode->nextSiblings != NULL && search(currentNode->nextSiblings,value))
		return 1;
	if(currentNode->firstChild != NULL && search(currentNode->firstChild,value))
		return 1;
	return 0;
}
int degree(node_t* currentNode, int value){
	if(currentNode->value == value){
		node_t* child = currentNode->firstChild;
		int cnt = 0;
		while(child != NULL){
			cnt++;
			child = child->nextSiblings;
		}
		return cnt;
	}
	// Searching Process
	if(currentNode->nextSiblings != NULL){
		int val = degree(currentNode->nextSiblings, value);
		if(val != -1)
			return val;
	}
	if(currentNode->firstChild != NULL){
		int val = degree(currentNode->firstChild, value);
		if(val != -1)
			return val;
	}
	return -1;
}
int main(void) {
	tree_t *t = NULL;
	int n, i, command;
	int parent, child, node, start, end;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &command);
		switch(command) {
			case 1:
				scanf("%d %d", &parent, &child);
				t = attach(t, parent, child);
				break;
			case 2:
				scanf("%d", &node);
				t = detach(t, node);
				break;
			case 3:
				scanf("%d", &node);
				printf("%d\n", search(t, node));
				break;
			case 4:
				scanf("%d", &node);
				printf("%d\n", degree(t, node));
				break;
			case 5:
				scanf("%d", &node);
				printf("%d\n", is_root(t, node));
				break;
			case 6:
				scanf("%d", &node);
				printf("%d\n", is_leaf(t, node));
				break;
			case 7:
				scanf("%d", &node);
				siblings(t, node);
				break;
			case 8:
				scanf("%d", &node);
				printf("%d\n", depth(t, node));
				break;
			case 9:
				scanf("%d %d", &start, &end);
				print_path(t, start, end);
				break;
			case 10:
				scanf("%d %d", &start, &end);
				printf("%d\n", path_length(t, start, end));
				break;
			case 11:
				scanf("%d", &node);
				ancestor(t, node);
				break;
			case 12:
				scanf("%d", &node);
				descendant(t, node);
				break;
			case 13:
				bfs(t);
				break;
			case 14:
				dfs(t);
				break;
			case 15:
				print_tree(t);
				break;
		}
	}
	return 0;
}
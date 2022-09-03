#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int value,dep;
	struct node *firstChild,*lastChild,*nextSiblings,*parent,*prevSibling;
} node_t;
typedef node_t tree_t;

typedef struct element{
	struct node *value;
	struct element *prev;
}element_t;
typedef element_t stact_t;

//element_t *push

node_t* createNode(int value){
	node_t *newNode = (node_t *)malloc(sizeof(node_t));
	newNode->value = value;
	newNode->firstChild = newNode->lastChild = newNode->nextSiblings = newNode->prevSibling = newNode->parent = NULL;
	return newNode;
}
node_t* attach(node_t *currentNode, int parent, int value){
	if(parent == -1){
		node_t *newNode = createNode(value);
		newNode->dep = 0;
		return newNode;
	}
	if(currentNode->value == parent){
		node_t *newNode = createNode(value);
		newNode->dep = currentNode->dep + 1;
		newNode->parent = currentNode;
		if(currentNode->firstChild == NULL){
			// if currentNode has no child
			// then newNode will be both firstChild and lastChild
			currentNode->firstChild = newNode;
			currentNode->lastChild = newNode;
		}else{
			// if currentNode has some child
			// create relation between newNode and lastChild
			currentNode->lastChild->nextSiblings = newNode;
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
node_t* detach(node_t *currentNode, int value){
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
int search(node_t *currentNode,int value){
	if(currentNode->value == value)	return 1;
	//Searching process
	if(currentNode->nextSiblings != NULL && search(currentNode->nextSiblings,value))
		return 1;
	if(currentNode->firstChild != NULL && search(currentNode->firstChild,value))
		return 1;
	return 0;
}
int degree(node_t *currentNode, int value){
	if(currentNode->value == value){
		node_t *child = currentNode->firstChild;
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
int is_root(node_t *currentNode, int value){
	return currentNode->value == value ? 1 : 0;
}
int is_leaf(node_t *currentNode, int value){
	int val1=-1,val2=-1;
	if(currentNode->value == value){
		return currentNode->firstChild == NULL ? 1 : 0;}
	if(currentNode->nextSiblings != NULL)
		val1 = is_leaf(currentNode->nextSiblings, value);
	if(currentNode->firstChild != NULL)
		val2 = is_leaf(currentNode->firstChild, value);
	return val1 == 1 || val2 == 1 ? 1 : 0;
}
void siblings(node_t *currentNode, int value){
	if(currentNode->value == value){
		if(currentNode->parent == NULL) printf("\n");
		else{
			currentNode = currentNode->parent->firstChild;
			while(currentNode != NULL){
				if(currentNode->value != value) printf("%d ",currentNode->value);
				currentNode = currentNode->nextSiblings;
			}
			printf("\n");
		}
		return;
	}
	if(currentNode->nextSiblings != NULL)
		siblings(currentNode->nextSiblings, value);
	if(currentNode->firstChild != NULL)
		siblings(currentNode->firstChild, value);
}
int depth(node_t *currentNode, int value){
	int val1=-1,val2=-1;
	if(currentNode->value == value)
		return currentNode -> dep;
	if(currentNode->nextSiblings != NULL)
		val1 = depth(currentNode->nextSiblings, value);
	if(currentNode->firstChild != NULL)
		val2 = depth(currentNode->firstChild, value);
	return val1 >= val2 ? val1 : val2;
}
void print_path(node_t *currentNode, int start, int end){
	if(currentNode->value == end){
		
	}
	if(currentNode->firstChild != NULL)
		print_path(currentNode->firstChild,start,end);
	if(currentNode->nextSiblings != NULL)
		print_path(currentNode->nextSiblings,start,end);
}
void dfs(node_t *currentNode){
	printf("%d ",currentNode->value);
	if(currentNode->firstChild != NULL)
		dfs(currentNode->firstChild);
	if(currentNode->nextSiblings != NULL)
		dfs(currentNode->nextSiblings);
}
void print_tree(node_t *currentNode){
	int cnt = currentNode->dep;
	while(cnt--) printf("    ");
	printf("%d\n",currentNode->value);
	if(currentNode->firstChild != NULL)
		print_tree(currentNode->firstChild);
	if(currentNode->nextSiblings != NULL)
		print_tree(currentNode->nextSiblings);
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
			/*case 10:
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
				break;*/
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
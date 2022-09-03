#include <stdio.h>
#include <stdlib.h>

#ifndef __bin_tree__
#define __bin_tree__
typedef struct node{
    int data;
    int nb;
    struct node *left;
    struct node *right;
} tree_t;
#endif

tree_t *createNode(int data, int nb){
    tree_t *tmp;
    tmp = (tree_t*)malloc(sizeof(tree_t));
    tmp->data = data;
    tmp->nb = nb;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

tree_t *searchNode(tree_t *root, int data){
    tree_t *result;
    
    if(root == NULL)
        return NULL;
    if(root->data == data)
        return root;
    
    result = searchNode(root->left, data);
    if(result != NULL)
        return result;
    
    return searchNode(root->right, data);
}

void add(tree_t *parent, tree_t *newNode, int branch){
    if(branch == 1)
        parent->left = newNode;
    else if(branch == 2)
        parent->right = newNode;
}

tree_t *attach(tree_t *root, int parentData, int childData, int branch){
    tree_t *tmpNode;

    if(parentData == -1){
        return createNode(childData,1);
    }
    tmpNode = searchNode(root, parentData);
    add(tmpNode, createNode(childData,(tmpNode->nb)*2+(branch-1)), branch);
    return root;
}

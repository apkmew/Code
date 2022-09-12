#include <stdio.h>

#ifndef __avl_tree__
#define __avl_tree__
typedef struct node{
  int    data;
  int    height;
  struct node *left;
  struct node *right;
} node_t;

typedef node_t avl_t;
#endif

void print_tree_2(avl_t *t, int depth, char pre){
  int i;

  if (t == NULL)
    return;
  for (i=0; i<depth; i++)
    printf("    ");
  printf("%c%d\n", pre, t->data);
  print_tree_2(t->left, depth+1, 'L');
  print_tree_2(t->right, depth+1, 'R');
}

void print_tree(avl_t *t){
  print_tree_2(t, 0, 'r');
}

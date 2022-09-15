#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int frequency;
    char word[20];
    struct node *left_child;
    struct node *right_child;
} node_t;

typedef node_t tree_t;

tree_t* init_tree(int frequency,char *word){
    tree_t *tree = (tree_t*)malloc(sizeof(tree_t));
    tree->frequency = frequency;
    strcpy(tree->word,word);
    tree->left_child = NULL;
    tree->right_child = NULL;
    return tree;
}

tree_t* merge_tree(tree_t *tree1,tree_t *tree2){
    tree_t *tree = (tree_t*)malloc(sizeof(tree_t));
    tree->frequency = tree1->frequency + tree2->frequency;
    tree->left_child = tree1;
    tree->right_child = tree2;
    return tree;
}

typedef struct heap {
    tree_t **data;
    int last_index;
} heap_t;

heap_t* init_heap(int n){
    n++;
    heap_t *heap = (heap_t*)malloc(sizeof(heap_t));
    heap->data = (tree_t**)malloc(sizeof(tree_t*)*n);
    heap->last_index = 0;
    return heap;
}

void swap(tree_t **a,tree_t **b){
    tree_t *temp = *a;
    *a = *b;
    *b = temp;
}

void insert(heap_t *h,tree_t *tree){
    h->last_index++;
    h->data[h->last_index] = tree;
    int i = h->last_index;
    while(i > 1){
        if(h->data[i]->frequency < h->data[i/2]->frequency){
            swap(&h->data[i],&h->data[i/2]);
            i /= 2;
        }
        else break;
    }
}

tree_t* delete_min(heap_t *h){
    tree_t *tree = h->data[1];
    h->data[1] = h->data[h->last_index];
    h->last_index--;
    h->last_index = (h->last_index < 0) ? 0 : h->last_index;
    int i = 1;
    while(i*2 <= h->last_index){
        if(h->data[i]->frequency > h->data[i*2]->frequency || h->data[i]->frequency > h->data[i*2+1]->frequency){
            if(h->data[i*2]->frequency <= h->data[i*2+1]->frequency){
                swap(&h->data[i],&h->data[i*2]);
                i *= 2;
            }
            else{
                swap(&h->data[i],&h->data[i*2+1]);
                i = i*2+1;
            }
        }
        else break;
    }
    return tree;
}

char code[100];
void print_huffman_code(tree_t *tree,int cou){
    if(tree->left_child == NULL && tree->right_child == NULL){
        printf("%s: ",tree->word);
        for(int i=0;i<cou;i++) printf("%c",code[i]);
        printf("\n");
    }
    else{
        code[cou] = '0';
        print_huffman_code(tree->left_child,cou+1);
        code[cou] = '1';
        print_huffman_code(tree->right_child,cou+1);
    }
}

int main(){
    int i,n,fre;
    char word[20];
    scanf("%d",&n);
    heap_t *min_heap = init_heap(n);
    for(i=0;i<n;i++){
        scanf(" %s %d",word,&fre);
        tree_t *tree = init_tree(fre,word);
        insert(min_heap,tree);
    }
    while(min_heap->last_index > 1){
        tree_t *tree1 = delete_min(min_heap);
        tree_t *tree2 = delete_min(min_heap);
        tree_t *tree = merge_tree(tree1,tree2);
        insert(min_heap,tree);
    }
    print_huffman_code(min_heap->data[1],0);
    return 0;
}
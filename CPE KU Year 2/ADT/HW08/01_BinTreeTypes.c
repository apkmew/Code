#include <stdio.h>
#include <stdlib.h>
#include "week8.h"

#ifndef __bin_tree__
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node_t;

typedef node_t tree_t;
#endif

typedef struct qnode {
    int level;
    tree_t *data;
    struct qnode *next;
} qnode_t;

typedef qnode_t queue_t;

queue_t* enqueue(queue_t *q,tree_t *t,int level){
    qnode_t *qnode = (qnode_t *)malloc(sizeof (qnode_t));
    qnode -> data = t;
    qnode -> level = level;
    qnode -> next = NULL;

    if(q == NULL){
        q = qnode;
    }
    else{
        qnode_t *temp = q;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = qnode;
    }
    return q;
}

queue_t* dequeue(queue_t *q){
    if(q == NULL){
        return q;
    }
    else{
        qnode_t *qnode = q;
        q = q -> next;
        free(qnode);
    }
    return q;
}

int is_full(tree_t *t){
    int l,r;
    if(t == NULL) return 1;
    if(t->left == NULL && t->right != NULL || t->left != NULL && t->right == NULL) return 0;
    l = is_full(t->left);
    r = is_full(t->right);
    return l&r;
}

int is_perfect(tree_t *t){
    int cou = 0,pow2=1;
    queue_t *q = NULL;
    q = enqueue(q,t,0);
    while(q != NULL){
        if(q->data->left != NULL) q = enqueue(q,q->data->left,q->level+1);
        if(q->data->right != NULL) q = enqueue(q,q->data->right,q->level+1);
        cou++;
        if(q->next == NULL || q->next->level != q->level){
            if(cou == pow2){
                pow2 *= 2;
                cou = 0;
            }
            else return 0;
        }
        
        q = dequeue(q);
    }
    if(!cou) return 1;
    return 0;
}

int is_complete(tree_t *t){
    int cou = 0,pow2 = 1,ch = 0;
    queue_t *q = NULL;
    q = enqueue(q,t,0);
    while(q != NULL){
        if(ch && (q->data->left != NULL || q->data->right != NULL)) return 0;
        if(q->data->left != NULL) q = enqueue(q,q->data->left,q->level+1);
        if(q->data->right != NULL) q = enqueue(q,q->data->right,q->level+1);
        if(q->data->left == NULL && q->data->right != NULL) return 0;
        if(q->data->left == NULL || q->data->right == NULL) ch = 1;
        cou++;
        if(q->next == NULL || q->next->level != q->level){
            if(cou == pow2){
                pow2 *= 2;
                cou = 0;
            }
            else if(q->next == NULL) return 1;
            else return 0;
        }
        q = dequeue(q);
    }
    return 1;
}

int is_degenerate(tree_t *t){
    int l,r;
    if(t == NULL) return 1; 
    if(t->left != NULL && t->right != NULL) return 0;
    l = is_degenerate(t->left);
    r = is_degenerate(t->right);
    return l&r;
}

int dl(tree_t *t){
    if(t == NULL) return 1;
    if(t->right != NULL) return 0;
    return dl(t->left);
}

int dr(tree_t *t){
    if(t == NULL) return 1;
    if(t->left != NULL) return 0;
    return dr(t->right);
}

int is_skewed(tree_t *t){
    return dl(t) || dr(t); 
}

int main(void){
    tree_t *t = NULL;
    int n, i;
    int parent, child;
    int branch; // 0 root, 1 left, 2 right

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&parent,&child,&branch);
        t = attach(t, parent, child, branch);
    }
    
    printf("%d %d %d %d %d\n",is_full(t),is_perfect(t),is_complete(t),is_degenerate(t),is_skewed(t));

    return 0;
}
/*
7
-1 10 0
10 6 1
10 18 2
6 4 1
6 8 2
18 21 2
18 15 1
5
-1 1 0
1 2 1
1 3 2
2 4 1
2 5 2
6
-1 1 0
1 2 1
1 3 2
2 4 1
2 5 2
3 6 1
4
-1 1 0
1 2 1
2 3 2
3 4 2
3
-1 1 0
1 2 1
2 3 1
7
-1 1 0
1 2 1
1 3 2
2 4 1
2 5 2
5 6 1
5 7 2
*/
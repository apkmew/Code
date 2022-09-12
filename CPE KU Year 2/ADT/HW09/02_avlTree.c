#include <stdio.h>
#include <stdlib.h>
#include "week9.h"

#ifndef __avl_tree__
typedef struct node {
    int data;
    int height;
    struct node *left;
    struct node *right;
} node_t;

typedef node_t avl_t;
#endif

avl_t* rotate_left(avl_t *t){
    avl_t *temp = t->right;
    t->right = temp->left;
    temp->left = t;
    t->height -= 2;
    return temp;
}

avl_t* rotate_right(avl_t *t){
    avl_t *temp = t->left;
    t->left = temp->right;
    temp->right = t;
    t->height -= 2;
    return temp;
}

avl_t* rotate_left_right(avl_t *t){
    t->left = rotate_left(t->left);
    t = rotate_right(t);
    return t;
}

avl_t* rotate_right_left(avl_t *t){
    t->right = rotate_right(t->right);
    t = rotate_left(t);
    return t;
}

avl_t* insert(avl_t *t,int data){
    int lh,rh;
    if(t==NULL){
        t = (avl_t*)malloc(sizeof(avl_t));
        t->data = data;
        t->height = 0;
        t->left = NULL;
        t->right = NULL;
    }
    else if(data < t->data){
        t->left = insert(t->left, data);
        if(t->left == NULL) lh = -1;
        else lh = t->left->height;
        if(t->right == NULL) rh = -1;
        else rh = t->right->height;
        t->height = (lh > rh ? lh : rh) + 1;
        if(lh - rh == 2){
            if(data < t->left->data){
                t = rotate_right(t);
            }
            else{
                t = rotate_left_right(t);
            }
        }
    }
    else if(data > t->data){
        t->right = insert(t->right, data);
        if(t->left == NULL) lh = -1;
        else lh = t->left->height;
        if(t->right == NULL) rh = -1;
        else rh = t->right->height;
        t->height = (lh > rh ? lh : rh) + 1;
        if(rh - lh == 2){
            if(data > t->right->data){
                t = rotate_left(t);
            }
            else{
                t = rotate_right_left(t);
            }
        }
    }
    if(t->left == NULL) lh = -1;
    else lh = t->left->height;
    if(t->right == NULL) rh = -1;
    else rh = t->right->height;
    if(lh > rh){
        t->height = lh + 1;
    }
    else{
        t->height = rh + 1;
    }
    return t;
}

avl_t* delete(avl_t *t,int data){
    int lh,rh,llh,lrh,rlh,rrh;
    if(t==NULL){
        return t;
    }
    else if(data < t->data){
        t->left = delete(t->left, data);
        if(t->left == NULL) lh = -1;
        else lh = t->left->height;
        if(t->right == NULL) rh = -1;
        else rh = t->right->height;
        t->height = (lh > rh ? lh : rh) + 1;
        if(rh - lh == 2){
            if(t->right->left == NULL) rlh = -1;
            else rlh = t->right->left->height;
            if(t->right->right == NULL) rrh = -1;
            else rrh = t->right->right->height;
            if(rlh > rrh){
                t = rotate_right_left(t);
            }
            else{
                t = rotate_left(t);
            }
        }
    }
    else if(data > t->data){
        t->right = delete(t->right, data);
        if(t->left == NULL) lh = -1;
        else lh = t->left->height;
        if(t->right == NULL) rh = -1;
        else rh = t->right->height;
        t->height = (lh > rh ? lh : rh) + 1;
        if(lh - rh == 2){
            if(t->left->left == NULL) llh = -1;
            else llh = t->left->left->height;
            if(t->left->right == NULL) lrh = -1;
            else lrh = t->left->right->height;
            if(lrh > llh){
                t = rotate_left_right(t);
            }
            else{
                t = rotate_right(t);
            }
        }
    }
    else{
        if(t->left==NULL && t->right==NULL){
            free(t);
            t = NULL;
            return t;
        }
        else if(t->left==NULL){
            avl_t *temp = t;
            t = t->right;
            free(temp);
        }
        else if(t->right==NULL){
            avl_t *temp = t;
            t = t->left;
            free(temp);
        }
        else{
            avl_t *temp = t->right;
            while(temp->left!=NULL){
                temp = temp->left;
            }
            t->data = temp->data;
            t->right = delete(t->right, temp->data);
            if(t->left == NULL) lh = -1;
            else lh = t->left->height;
            if(t->right == NULL) rh = -1;
            else rh = t->right->height;
            t->height = (lh > rh ? lh : rh) + 1;
            if(lh - rh == 2){
                if(t->left->left == NULL) llh = -1;
                else llh = t->left->left->height;
                if(t->left->right == NULL) lrh = -1;
                else lrh = t->left->right->height;
                if(lrh > llh){
                    t = rotate_left_right(t);
                }
                else{
                    t = rotate_right(t);
                }
            }
        }
    }
    if(t->left == NULL) lh = -1;
    else lh = t->left->height;
    if(t->right == NULL) rh = -1;
    else rh = t->right->height;
    if(lh > rh){
        t->height = lh + 1;
    }
    else{
        t->height = rh + 1;
    }
    return t;
}

int main(void){
    avl_t *t = NULL;
    int n, i;
    int command, data;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &command);
        switch(command){
            case 1:
                scanf("%d", &data);
                t = insert(t, data);
                break;
            case 2:
                scanf("%d", &data);
                t = delete(t, data);
                break;
            case 3:
                print_tree(t);
                break;
        }
    }
    return 0;
}
/*
16
1 1
1 2
1 3
3
1 4
1 5
1 6
3
1 7
1 8
1 9
1 10
3
1 11
1 12
3
==================
16
1 12
1 11
1 10
3
1 9
1 8
1 7
3
1 6
1 5
1 4
1 3
3
1 2
1 1
3
==================
17
1 4
1 69
1 22
1 50
1 8
1 16
1 31
1 77
1 35
1 9
1 12
1 24
1 57
1 96
3
2 9
3
==================
21
1 4
1 69
1 22
1 50
1 8
1 16
1 31
1 77
1 35
1 9
1 12
1 24
1 57
1 96
2 9
2 69
3
2 8
3
2 22
3
*/
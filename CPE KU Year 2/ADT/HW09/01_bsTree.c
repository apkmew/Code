#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node_t;

typedef node_t bst_t;

bst_t* insert(bst_t *t,int data){
    if(t==NULL){
        t = (bst_t*)malloc(sizeof(bst_t));
        t->data = data;
        t->left = NULL;
        t->right = NULL;
    }
    else if(data < t->data){
        t->left = insert(t->left, data);
    }
    else if(data > t->data){
        t->right = insert(t->right, data);
    }
    return t;
}

bst_t* delete(bst_t *t,int data){
    if(t==NULL){
        return t;
    }
    else if(data < t->data){
        t->left = delete(t->left, data);
    }
    else if(data > t->data){
        t->right = delete(t->right, data);
    }
    else{
        if(t->left==NULL && t->right==NULL){
            free(t);
            t = NULL;
        }
        else if(t->left==NULL){
            bst_t *temp = t;
            t = t->right;
            free(temp);
        }
        else if(t->right==NULL){
            bst_t *temp = t;
            t = t->left;
            free(temp);
        }
        else{
            bst_t *temp = t->right;
            while(temp->left!=NULL){
                temp = temp->left;
            }
            t->data = temp->data;
            t->right = delete(t->right, temp->data);
        }
    }
    return t;
}

int find(bst_t *t,int data){
    if(t==NULL){
        return 0;
    }
    else if(data < t->data){
        return find(t->left, data);
    }
    else if(data > t->data){
        return find(t->right, data);
    }
    else{
        return 1;
    }
}

int find_min(bst_t *t){
    if(t->left==NULL){
        return t->data;
    }
    else{
        return find_min(t->left);
    }
}

int find_max(bst_t *t){
    if(t->right==NULL){
        return t->data;
    }
    else{
        return find_max(t->right);
    }
}

int main(void){
    bst_t *t = NULL;
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
                scanf("%d", &data);
                printf("%d\n", find(t, data));
                break;
            case 4:
                printf("%d\n", find_min(t));
                break;
            case 5:
                printf("%d\n", find_max(t));
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
1 4
1 5
1 6
1 7
1 8
1 9
1 10
1 11
1 12
3 1
3 10
3 15
3 20
===================
16
1 1
1 2
1 3
1 4
4
5
1 5
1 6
1 7
1 8
1 9
1 10
1 11
1 12
4
5
===================
16
1 82
1 79
1 66
1 78
3 79
2 79
3 79
1 93
1 99
1 5
1 61
1 68
1 3
5
2 99
5
===================
7
3 11
1 3
1 90
1 43
3 50
4
5
===================
13
1 50
1 8
1 61
1 1
1 35
1 87
2 50
3 50
2 8
2 61
3 8
3 87
3 61
*/
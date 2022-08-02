#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

typedef node_t stact_t;

stact_t* push(stact_t *s,int value){
    node_t *node = (node_t *)malloc(sizeof (node_t));
    node -> data = value;
    node -> next = NULL;

    node -> next = s;
    s = node;
    return s;
}

void top(stact_t *s){
    if(s == NULL){
        printf("Stack is empty.\n");
    }
    else{
        printf("%d\n",s -> data);
    }
}

stact_t* pop(stact_t *s){
    if(s == NULL){
        return s;
    }
    else{
        node_t *node = s;
        s = s -> next;
        free(node);
    }
    return s;
}

void empty(stact_t *s){
    if(s == NULL){
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack is not empty.\n");
    }
}

void size(stact_t *s){
    int count = 0;
    while(s != NULL){
        count++;
        s = s -> next;
    }
    printf("%d\n",count);
}

int main(void){
    stact_t *s = NULL;
    int n,i,command,value;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&command);
        switch (command)
        {
            case 1:
                scanf("%d",&value);
                s = push(s,value);
                break;
            case 2:
                top(s);
                break;
            case 3:
                s = pop(s);
                break;
            case 4:
                empty(s);
                break;
            case 5:
                size(s);
                break;
        }
    }
    return 0;
}
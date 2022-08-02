#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char data;
    struct node *next;
} node_t;

typedef node_t stact_t;

stact_t* push(stact_t *s,char value){
    node_t *node = (node_t *)malloc(sizeof (node_t));
    node -> data = value;
    node -> next = NULL;

    node -> next = s;
    s = node;
    return s;
}

char top(stact_t *s){
    if(s == NULL){
        return '\0';
    }
    else{
        return s -> data;
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

int empty(stact_t *s){
    if(s == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    stact_t *s = NULL;
    int ch = 0;
    char c,t;
    while(1){
        scanf(" %c",&c);
        if(c == 'y') break;
        if(c == 'x'){
            ch = 1;
            continue;
        }
        if(!ch) s = push(s,c);
        else{
            t = top(s);
            if(t == '\0' || t != c){
                printf("0");
                return 0;
            }
            else{
                s = pop(s);
            }
        }
    }
    if(empty(s)) printf("1");
    else printf("0");
    return 0;
}
/*
1q2w3e4rxr4e3w2q1y 
1q2w3e4rx1q2w3e4ry 
1q2w3e4rx1q2w3ey
*/
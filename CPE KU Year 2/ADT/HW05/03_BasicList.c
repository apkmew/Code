#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node_t;

node_t* append(node_t *nowNode){
    int value;
    node_t *startNode = (node_t *)malloc(sizeof (node_t));
    node_t *node = (node_t *)malloc(sizeof (node_t));
    startNode = nowNode;
    scanf("%d",&value);
    node -> data = value;
    node -> next = NULL;
    if(nowNode == NULL){
        nowNode = node;
        return nowNode;
    }
    while(nowNode -> next != NULL){
        nowNode = nowNode -> next;
    }
    nowNode -> next = node;
    return startNode;
}

void get(node_t *nowNode){
    int pos,cou=0;
    scanf("%d",&pos);
    while(cou++ != pos){
        nowNode = nowNode -> next;
    }
    printf("%d\n",nowNode -> data);
}

void show(node_t *nowNode){
    while(nowNode != NULL){
        printf("%d ",nowNode -> data);
        nowNode = nowNode -> next;
    }
    printf("\n");
}

node_t* reverse(node_t *nowNode){
    node_t *nextNode1 = (node_t *)malloc(sizeof (node_t));
    node_t *nextNode2 = (node_t *)malloc(sizeof (node_t));
    node_t *startNode = (node_t *)malloc(sizeof (node_t));
    startNode = nowNode;
    nextNode1 = nowNode -> next;
    if(nextNode1 == NULL) return nowNode;
    nextNode2 = nextNode1 -> next;
    if(nextNode2 == NULL){
        nextNode1 -> next = nowNode;
        nowNode -> next = NULL;
        return nextNode1;
    }
    while(nextNode2 != NULL){
        nextNode1 -> next = nowNode;
        nowNode = nextNode1;
        nextNode1 = nextNode2;
        nextNode2 = nextNode2 -> next;
    }
    nextNode1 -> next = nowNode;
    startNode -> next = NULL;
    return nextNode1;
}

node_t* cut(node_t *nowNode){
    int st,en,cou=0;
    node_t *startNode;
    scanf("%d %d",&st,&en);
    while(cou <= en){
        if(cou == st){
            startNode = nowNode;
        }
        if(cou == en){
            nowNode -> next = NULL;
            return startNode;
        }
        nowNode = nowNode -> next;
        cou++;
    }
}

int main(void){
    node_t *startNode;
    int n,i;
    char command;
    
    startNode = NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&command);
        switch(command){
            case 'A' : startNode = append(startNode);   break;
            case 'G' : get(startNode);                  break;
            case 'S' : show(startNode);                 break;
            case 'R' : startNode = reverse(startNode);  break;
            case 'C' : startNode = cut(startNode);      break;
            default  :                                  break;
        }
    }
}
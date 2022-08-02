#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

typedef node_t queue_t;

queue_t* enqueue(queue_t *q,int value){
    node_t *node = (node_t *)malloc(sizeof (node_t));
    node -> data = value;
    node -> next = NULL;

    if(q == NULL){
        q = node;
    }
    else{
        node_t *temp = q;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = node;
    }
    return q;
}

queue_t* dequeue(queue_t *q){
    if(q == NULL){
        printf("Queue is empty.\n");
        return q;
    }
    else{
        node_t *node = q;
        q = q -> next;
        printf("%d\n",node -> data);
        free(node);
    }
    return q;
}

void show(queue_t *q){
    if(q == NULL){
        printf("Queue is empty.\n");
    }
    else{
        node_t *temp = q;
        while(temp != NULL){
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

void empty(queue_t *q){
    if(q == NULL){
        printf("Queue is empty.\n");
    }
    else{
        printf("Queue is not empty.\n");
    }
}

void size(queue_t *q){
    int count = 0;
    while(q != NULL){
        count++;
        q = q -> next;
    }
    printf("%d\n",count);
}

int main(void){
    queue_t *q = NULL;
    int n,i,command,value;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&command);
        switch(command){
            case 1 :
                scanf("%d",&value);
                q = enqueue(q,value);
                break;
            case 2 :
                q = dequeue(q);
                break;
            case 3 :
                show(q);
                break;
            case 4 :
                empty(q);
                break;
            case 5 :
                size(q);
                break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEXTSIZE 21

typedef struct item{
    char *text;
    struct item *next;
} item_t;

typedef struct hash{
    item_t **table;
    int size;
    int hash_key;
} hash_t;

hash_t* init_hashtable(int m, int hash_key){
    hash_t *hash = (hash_t*)malloc(sizeof(hash_t));
    hash->table = (item_t**)malloc(sizeof(item_t*)*m);
    hash->size = m;
    hash->hash_key = hash_key;
    for(int i=0; i<m; i++){
        hash->table[i] = NULL;
    }
    return hash;
}

unsigned int hash_function(char *text, int n, int hash_key){
    if(n==0) return text[0];
    return hash_key*hash_function(text, n-1, hash_key) + text[n];
}

int hashx(char *text, int m, int hash_key){
    return hash_function(text, strlen(text)-1, hash_key)%m;
}

void insert(hash_t *hash, char *text){
    int index = hashx(text, hash->size, hash->hash_key);
    item_t *new_item = (item_t*)malloc(sizeof(item_t));
    new_item->text = (char*)malloc(sizeof(char)*TEXTSIZE);
    strcpy(new_item->text, text);
    new_item->next = hash->table[index];
    hash->table[index] = new_item;
}

int search(hash_t *hash, char *text){
    int index = hashx(text, hash->size, hash->hash_key);
    item_t *temp = hash->table[index];
    while(temp!=NULL){
        if(strcmp(temp->text, text)==0) return index;
        temp = temp->next;
    }
    return -1;
}

int main(void){
    hash_t *hashtable = NULL;
    char *text = NULL;
    int m, n, i, hash_key;
    int command;

    scanf("%d %d %d", &m, &n, &hash_key);
    hashtable = init_hashtable(m, hash_key);
    text = (char *)malloc(sizeof(char) * TEXTSIZE);

    for(i=0; i<n; i++) {
        scanf("%d %s", &command, text);
        switch(command) {
            case 1:
                insert(hashtable, text);
                break;
            case 2:
                printf("%d\n",search(hashtable, text));
                break;
        }
    }
    return 0;
}
/*
13 10 19
1 qwert
1 asdf
1 zklwo
1 a
2 qwert
2 qwerty
2 a
2 asdf
2 omg
2 abcd
====================
211 20 93
1 abcd
1 abdc
1 afnc
1 oog
1 ozg
1 obg
1 obp
1 fjdlo
1 auvun
1 adzlr
2 abcd
2 abdc
2 afnc
2 oog
2 ozg
2 obg
2 obp
2 fjdlo
2 auvun
2 adzlr
====================
31 14 19
1 mhewrv
1 rkrfni
1 wtabik
1 ibpffi
1 hwrthu
1 mcpsnn
1 xmyprx
2 mhewrv
2 rkrfni
2 wtabik
2 ibpffi
2 hwrthu
2 mcpsnn
2 xmyprx
====================
*/
*/
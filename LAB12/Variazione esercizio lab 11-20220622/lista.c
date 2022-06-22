#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

void print_list(Lista *l){
    if(l == NULL){
        printf("Lista vuota\n");
    }
    else if (l->next == NULL){
        printf("%d\n", l->info);
    }
    else{
        printf("%d ",l->info);
        print_list(l->next);
    }
}

Lista* init(int info, Lista* next){
    Lista * n_nodo = malloc(sizeof(Lista));
    n_nodo->info = info;
    n_nodo->next = next;
    return n_nodo;
}

int read(Lista* l, unsigned int pos){
    if(l == NULL){
        return -1;
    }
    if(pos == 0){
        return l->info;
    }
    return read(l->next, pos-1);
}

//your code

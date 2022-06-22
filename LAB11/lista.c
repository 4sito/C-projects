#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

void print_list(Lista* l){
if(l == NULL)
    printf("La lista è vuota!\n");
else{
    while(l!=NULL) {
        printf("%d ", l->info );
        l = l->next;

    }
    printf("\n");
}

}

Lista* init(int data, Lista* next){

Lista* new_node = malloc(sizeof(Lista));
new_node->info = data;
new_node->next = next; 
// se il valore di next è NULL, vuol dire che siamo in 'cima' alla pila
// ovvero al primo elemento di questa pila;
return new_node;
}

int read(Lista* l, unsigned int pos){

while(l != NULL && pos > 0){
   
    l = l->next;
    pos--;

}

return l!=NULL? l->info:-1;


}

void insert_element(Lista **l, int data, unsigned int pos){

    if(pos == 0){
        *l = init(data, *l);
        return;
   }if(*l == NULL)
    return;

    Lista* tmp = *l;

    while(tmp->next != NULL && pos > 1){
        tmp = tmp->next;
        pos--;
        }
    if(pos == 1)
        tmp->next = init(data, tmp->next);

}

void delete_element(Lista ** l, unsigned int pos){

    if(*l == NULL){
        return;
    }if(pos == 0){
        Lista* new_l = (*l)->next;
        free(*l);
        *l = new_l;
        return;
    }
    Lista* tmp = *l;
    while(tmp->next != NULL && pos>1){
        tmp = tmp->next;
        pos--;
    }
    if(pos == 1 && tmp->next != NULL){
        Lista* new_l = tmp->next->next;
        free(tmp->next);
        tmp->next = new_l;
    }

}

unsigned int size(Lista* l){
    int s = 0;
    
    
    while(l->next != NULL){
        l = l->next;        
        s++;
    }


    return s;
}

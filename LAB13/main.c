#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    BTree *albero;
    init(&albero);
    printf("Albero vuoto? %d\n", isempty(albero));
    
    albero = ordinsert_rec(albero, 2);
    printf("Albero vuoto? %d\n", isempty(albero));
    albero = ordinsert_rec(albero, 1);
    albero = ordinsert_rec(albero, 0);
    albero = ordinsert_rec(albero, 2);
    albero = ordinsert_rec(albero, 6);
    albero = ordinsert_rec(albero, 6);
    albero = ordinsert_rec(albero, 9);
    albero = ordinsert_rec(albero, 5);
    print_rec(albero);
    
    int target = 7;
    printf("\n");
    delete_pos(&albero, 6);
    print_scheme(albero);
    delete_pos(&albero, 5);
    print_scheme(albero);
    delete_pos(&albero, 1);
    print_scheme(albero);
    printf("\nL'albero contiene %d? %d\n", target, search_rec(albero, target));
    
    return 0;
}

#include "giocatore.h"
#include "board.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


void scegli_mossa_utente(int *x, int *y) {
    printf("Inserisci Mossa: ");
    scanf("%d %d", x, y);
}


void scegli_mossa_computer(int *x, int *y) {
    
    srand(time(NULL)); 
    // Inserite qua il vostro codice
    *x = rand()%3;
    *y = rand()%3;

}


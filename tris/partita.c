#include "partita.h"
#include "board.h"
#include "giocatore.h"
#include <stdio.h>

void gioca(char board[], void(*p1)(int *x, int *y), void(*p2)(int *x, int *y)) {

    // Inserite qua il vostro codice
    while(board_riempita(board) == 0 || board_vincente(board) == 0){
        
        
        scegli_mossa_utente( (int*)p1,  (int*)p1 ); 
        
        while(mossa_ammissibile(board,*(int*)p1, *(int*)p1 ) == 0 ){
        

        scegli_mossa_utente( (int*)p1,  (int*)p1 ); 

        }

        effettua_mossa(board, *( (int*) p1), *( (int*) p1), SIMB_X);

        while(mossa_ammissibile(board, *( (int*) p2), *( (int*) p2) ) == 0){
        
        scegli_mossa_utente( ( (int*) p2) , ( (int*) p2) );
        
        }

        effettua_mossa(board, *( (int*) p2), *( (int*) p2) , SIMB_O);

    }
}

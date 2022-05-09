#include "partita.h"
#include "board.h"
#include "giocatore.h"
#include <stdio.h>

void gioca(char board[], void(*p1)(int *x, int *y), void(*p2)(int *x, int *y)) {
    int a, b, x, y;

    // Inserite qua il vostro codice
    // while(board_riempita(board) == 0 || board_vincente(board) == 0){
        
        
        (*p1)(&x, &y); // scegli mossa utente  
        
        while(mossa_ammissibile(board, x, y ) == 0 ){
        
        printf("mossa non ammessa, immetti nuovamente: \n");

        (*p1)(&x, &y); // scegli mossa utente  

        }
        
        effettua_mossa(board, x, y, SIMB_X);

        print_board(board);

        if(board_riempita(board) == 1 || board_vincente(board) == 1)
            return;

        (*p2)(&a, &b);
        
        while(mossa_ammissibile(board, a, b) == 0){
        
        //printf("mossa non ammessa, immetti nuovamente: \n");

        (*p2)(&a, &b);
        
        }

        effettua_mossa(board, a, b , SIMB_O);

    
}

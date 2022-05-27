#include <stdio.h>
#include "studente.h"

float calcola_media(Studente s){

float media;
int i, count = 0;

for(i = 0; i < N_VOTI; i++){

    if(s.voti[i] <= 30 && s.voti[i] >= 0)
        media += s.voti[i];
    else if(s.voti[i] == -1)
        count++;


}

// printf("%d %d\n", count, N_VOTI);

media /= (N_VOTI-count);

return media;

}


int sufficienza_studente(Studente s){

if( calcola_media(s) >= 18 ) 
    return 1;
else
    return 0;

}

void print_studente(Studente s){

    // nome cognome 
    // voti

    printf("%s %s\n", s.nome, s.cognome);
    for(int i = 0; i < N_VOTI; i++)
        printf("%i ", s.voti[i]);

    printf("\n");

}

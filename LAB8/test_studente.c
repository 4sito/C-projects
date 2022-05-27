#include "studente.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    Studente s;
    printf("Inserire dati studente:\n");
    scanf("%s %s", s.nome, s.cognome);
    
    /*printf("Inserire %d voti:\n", N_VOTI);
    for(int i=0; i<N_VOTI; i++){
        scanf("%d", s.voti + i);
    }
    */
    srand(time(NULL));
    for(int i=0; i<N_VOTI; i++)
        s.voti[i] = rand()%30 +1;

    s.voti[0] = -1;

    print_studente(s);
    printf("Media: %f\n", calcola_media(s));
    if(sufficienza_studente(s)==1)
        printf("Sufficiente\n");
    else printf("Non sufficiente\n");
}
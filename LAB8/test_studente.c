#include "studente.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    Studente s;
    srand(time(NULL));

    printf("Inserire dati studente:\n");
    scanf("%s %s", s.nome, s.cognome);
    
    printf("Inserire %d voti:\n", N_VOTI);
    for(int i=0; i<N_VOTI; i++){
        s.voti[i] = rand()%31;
    }
    
    print_studente(s);
    
    printf("Media: %f\n", calcola_media(s));
    if(sufficienza_studente(s))
        printf("Sufficiente\n");
    else printf("Non sufficiente\n");
}

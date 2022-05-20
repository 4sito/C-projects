#include <stdio.h>
#include "studente.h"



float calcola_media(Studente s){
    int somma = 0;
    int voti_validi = 0;
    for(int i=0;i<N_VOTI;i++){
        int voto = s.voti[i];
        if(voto>=0 && voto<=30){
            somma += voto;
            voti_validi++;
        }
    }
    return voti_validi>0? somma/(float) voti_validi: 0.0;
}

int sufficienza_studente(Studente s){

if(calcola_media(s) >= 18)
    return 1;
else
    return 0;


}

void print_studente(Studente s){

printf("%s %s\n", s.nome, s.cognome);

for (int i = 0; i < N_VOTI; ++i) {
    printf("%d ", s.voti[i]);
}

printf("\n");

return;
}


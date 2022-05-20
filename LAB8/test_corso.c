#include "corso.h"
#include <stdio.h>

int main(){
    Studente s[2]={
        {"Enrico" ,"Cancelli", {21,23,18,29,30}},
        {"Gennaro","Bullo"   , {30,26,30,18,30}}
    };
    printf("Studenti del corso:\n");
    for (int i = 0; i < 2; ++i) {
        print_studente(s[i]);
    }

    printf("Miglior Studente:\n");
    print_studente(miglior_studente(s, 2));
    /*
     * for(int i=0; i<N_VOTI; i++){
        printf("Percentuale superamento corso %d: %f\n", i, percentuale_superamento_test(s, 2, i)*100);
    }
    */
    ordina_studenti(s,2);

    printf("Studenti del corso:\n");
    for (int i = 0; i < 2; ++i) {
        print_studente(s[i]);
    }
}

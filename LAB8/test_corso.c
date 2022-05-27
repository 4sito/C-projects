#include "corso.h"
#include <stdio.h>

int main(){
    Studente s[6]={
        {"Enrico" ,"Cancelli" , {21,23,18,29,30}},
        {"Gennaro","Bullo"    , {18,16,22,18,2}},
        {"Usain", "Bolt"      , {-1, 30, -1, 12, 18}},
        {"Giulio", "Cesare"   ,  {13, 16, 22, 30, -1}},
        {"Sourav", "Das"      ,  {-1, -1, -1, 30, 29}},
        {"Shutruk", "Nakhunte",   {24, 17, 22, -1, 23}},
    };

    printf("Miglior Studente:\n");
    print_studente(miglior_studente(s, 6));
    for(int i=0; i<N_VOTI; i++){
        printf("Percentuale superamento corso %d: %f\n", i, percentuale_superamento_test(s, 6, i)*100);
    }

    ordina_studenti(s, 6);
}
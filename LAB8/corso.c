#include "corso.h"
#include <stdio.h>
int i;

float percentuale_superamento_test(Studente s[], 
        int n_studenti, int esame){

    if(esame > 4 || esame < 0)
    return 0;

float dato = 0;
int non_dato=0;

for (i = 0; i < n_studenti; ++i) {
    if(s[i].voti[esame] >= 18 && s[i].voti[esame] <= 30)
        dato++;
    else if(s[i].voti[esame] == -1 ||
            (s[i].voti[esame] >= 0 && s[i].voti[esame] < 18 ))
        non_dato++;
    else
        return 0;

}

//printf("\n%f %d \n", dato, n_studenti );

dato /= n_studenti;

return dato;


}

Studente miglior_studente(Studente s[], int n_studenti){

    float media = calcola_media(s[0]), media_tmp;
    int indice = 0;
    
for (i = 1; i < n_studenti; i++) {

    //printf("%d; Media: %f \n", i, calcola_media(s[i]));        
    media_tmp = calcola_media(s[i]);
    if( media < media_tmp ){

            media = media_tmp;
            indice = i;

        }
}

return s[indice];


}


void ordina_studenti(Studente s[], int n_studenti){
    if(n_studenti==0){
        return;
    }
    Studente pivot = s[n_studenti-1];
    int i = 0;

    printf("Inizio ciclo for\n");
    for(int current = 0; current<n_studenti; current++){
        if(calcola_media(s[current])<=calcola_media(pivot)){
            //scambia i con current
            Studente temp = s[i];
            s[i] = s[current];
            s[current] = temp;
            i++;
        }
    }
    ordina_studenti(s, i-1);
    ordina_studenti(s+i+1, n_studenti-i);
}

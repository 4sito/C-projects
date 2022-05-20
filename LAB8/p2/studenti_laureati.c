#include "studenti_laureati.h"

int conta_linee(FILE* fp){
int n = 0;
char buffer[256];

while( fgets(buffer, sizeof buffer, fp ) ){

    n++;

    }

    rewind(fp);
    return n;
}

void leggi_studente(FILE* fp, Studente_extra* s, int righe){
    
    char buffer[256], lau[256];

    /*
     * while( righe > 0){
        fgets(buffer, sizeof buffer, fp);
        //printf("%s\n", buffer);
        righe--;
    }*
    */

    fscanf(fp, "%s %s %s", s->nome, s->cognome, lau);

    if(strcmp(lau, "Laureato")){
        
        s->laurea = 0;
        for (int i = 0; i < N_VOTI; ++i)
            fscanf(fp, "%d ", &s->voti[i]);
        

    }else{
        s->laurea = 1;
        fscanf(fp, "%f", &s->media);
    } 

    //rewind(fp);

}

void scrivi_studente(FILE *fp, Studente_extra s){


if(s.laurea)
    fprintf(fp, "%s %s Laureato %1.3f", s.nome,
        s. cognome, s.media);
else{
    fprintf(fp, "%s %s Non_laureato ", s.nome, s. cognome);
    for(int i = 0; i < N_VOTI; i++)
    fprintf(fp, "%d ", s.voti[i]);
}

fprintf(fp, "\n");

}

float calcola_media(Studente_extra s){

    int esami_dati = 0, somma = 0, voto;
    float media;

    for(int i = 0; i < N_VOTI; i++){
        voto = s.voti[i];

        if(voto >= 0 && voto <= 30){

            somma += voto;
            esami_dati++;

        }


    }
    return esami_dati>0? somma/(float) esami_dati: 0.0;
}

int sufficienza_studente(Studente_extra s){

float media = calcola_media(s);

return media>=18 ? 1 : 0;


}

int completato_percorso(Studente_extra s){

    int esami = 0;

    for(int i = 0; i < N_VOTI; i++)
        if(s.voti[i] >= 0 && s.voti[i] <= 30)
            esami++;
    
    return esami==5 ? 1 : 0;

}

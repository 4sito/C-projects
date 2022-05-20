#define N_VOTI 5
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct studente {
    char nome[256];
    char cognome[256];
    int voti[N_VOTI];
    bool laurea;
    float media;
} Studente_extra;

int conta_linee(FILE* fp); //

void leggi_studente(FILE* fp, Studente_extra* s, int righe); //
void scrivi_studente(FILE* fp, Studente_extra s); 

float calcola_media(Studente_extra s);      //
int sufficienza_studente(Studente_extra s); //
int completato_percorso(Studente_extra s); // 
// POST: restituisce 1 se lo studente e' laureato, 0 altrimenti;
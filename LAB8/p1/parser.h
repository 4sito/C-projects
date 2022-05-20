#include "corso.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int conta_linee(FILE* fp);
//POST: conta il numero di entries nel file

void leggi_studente(FILE* fp, Studente* s, int righe);
//POST: legge da file i dati relativi ad un unico studente

void carica_studente(Studente *s);

int strleen(char* string);

void scrivi_studente(FILE* fp, Studente s);
//POST: scrive su file i dati di un unico studente

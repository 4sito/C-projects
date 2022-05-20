#include "parser.h"

int conta_linee(FILE* fp){
int n = 0;
char buffer[256];

while( fgets(buffer, sizeof buffer, fp ) ){

    n++;

    }
    rewind(fp);
    return n;
}
/*
    //fscanf(fp, "%s %s", nome, cognome );
    //printf("%s %s\n", nome, cognome);

for (int i = 0; i < N_VOTI; ++i) {
    
    //fscanf(fp, "%d", &voti[i]);
    //printf("%d ", voti[i]);

}
//printf("\n");
//printf("\n");
*/


void leggi_studente(FILE* fp, Studente* s, int righe){
    char buffer[256];

    while( righe > 0){
        fgets(buffer, sizeof buffer, fp);
        //printf("%s\n", buffer);
        righe--;
    }

    fscanf(fp, "%s %s", s->nome, s->cognome);

    for (int i = 0; i < N_VOTI; ++i) {
        fscanf(fp, "%d ", &s->voti[i]);
    }

    rewind(fp);

}

void carica_studente(Studente *s){

printf("Nome e Cognome studente:\n");
scanf("%s %s", &s->nome, &s->cognome);

for (int i = 0; i < N_VOTI; ++i)
    s->voti[i] = rand()%31;


}

int strleen(char *string){

int len = 0;

while(string[len] != '\0')
    len++;

return len;
}

void scrivi_studente(FILE* fp, Studente s){

int spazio;
fprintf(fp, "%s %s ", s.nome, s.cognome);


 
if(strleen(s.nome)+strleen(s.cognome) < 15)
    spazio = 15 - (strleen(s.nome) + strleen(s.cognome) );

while(spazio > 0){
    fprintf(fp, " ");
    spazio--;
    }


for (int i = 0; i < N_VOTI; ++i){

    if(s.voti[i] < 10 && s.voti > 0)
        fprintf(fp, " ");
    fprintf(fp, "%d ", s.voti[i]);
    
    }
    
fprintf(fp, "\n");

}

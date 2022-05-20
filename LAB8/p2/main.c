#include <stdio.h>
#include "studenti_laureati.h"
/*
Partendo dall'esercizio precedente (esercizio del Lab 9) viene chiesto di definire un 
tipo struct Studente_extra che aggiunge delle funzionalità al tipo Studente. 
Vogliamo rappresentare sia gli studenti che stanno frequentando i corsi 
(quindi con un numero che va da 0 a 5 di esami ancora da completare) e studenti che sono già laureati. 

In questo secondo caso non ci interessa sapere i voti dei singoli esami fatti, ci basta sapere la media 
con cui si sono laureati. Anche in questo caso vi viene fornito un file studenti.txt di cui 
dovrete fare il parsing.

Il vostro compito è "laureare" tutti gli studenti che hanno completato il loro percorso (hanno fatto tutti gli esami,
 sia che essi abbiano avuto esito positivo e negativo, e hanno una media superiore o uguale a 18). 
 Per laureare si intende produrre un file in output che ha tutti gli stessi studenti del file iniziale ma con le entries modificate 
 per tutti coloro che hanno completato il proprio percorso

Nota: nel file studenti.txt c'è già uno studente laureato per farvi capire meglio. 
Ciò però vi impone di controllare se uno studente è già laureato o meno.
*/

int main(){
    FILE *fp;
    fp = fopen("studenti.txt","r");
    int linee;
    if (fp==NULL){
        printf("Il file non può essere aperto\n");
    }
    else {
        linee = conta_linee(fp);
        Studente_extra inf[linee];

        for(int i = 0; i < linee; i++){
            leggi_studente(fp, &inf[i], i);
            
            if(inf[i].laurea == 0)
                inf[i].media = calcola_media(inf[i]);
                
                //printf("%s da laureare\n", inf[i].nome);

    
                if(completato_percorso(inf[i]))
                    printf("%s si puo laureare\n", inf[i].nome);
        }
    
    fclose(fp);
    printf("File letto\n");

    fp = fopen("st2.txt", "w");

    for(int i = 0; i < linee; i++){
            
            if(inf[i].laurea == 0)
                
                //printf("%s da laureare\n", inf[i].nome);
                inf[i].laurea = completato_percorso(inf[i]); 
                    
                scrivi_studente(fp, inf[i]);

    }

    fclose(fp);
    printf("File scritto");
        //codice qui
    }
}

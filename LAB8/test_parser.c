#include <stdio.h>
#include "parser.h"

int main(){
    
    srand(time(NULL));
    int linee;
    FILE *fp;
    fp = fopen("studenti.txt","r");
    

    if (fp==NULL){
        printf("Il file non può essere aperto\n");
    }
    else {
        //lettura file qui

        linee = conta_linee(fp);
        printf("numero di linee:%d \n", linee);
        Studente corso[linee], studt;

        for (int i = 0; i < linee; ++i) {

        leggi_studente(fp, &corso[i], i);
        //print_studente(corso[i]);

        }
        fclose(fp);
        printf("File letto\n");

        studt = miglior_studente(corso, linee);
        print_studente(studt);
        
       /* 
        for (int i = 0; i < linee; ++i) {
            printf("%s %f\n",corso[i].nome,
                    calcola_media(corso[i]));
        }
        */

        /*
        for (int i = 0; i < N_VOTI; ++i) 
            printf("%f ", percentuale_superamento_test(corso, linee, i)*100);
        printf("\n");
        */

        //ordinamento
        fp = fopen("stud_ord.txt", "w"); 
        
        
        printf("Inizio ordinamento\n");
        ordina_studenti(corso, linee);
        printf("Fine ordinamento\n");

        for (int i = 0; i < linee; ++i)
            print_studente(corso[i]);
        
        fclose(fp);
        printf("File Ordinato\n");

        //scrittura file qui


        fp  = fopen("studenti.txt", "a");

        carica_studente(&studt);
        //print_studente(studt);

        scrivi_studente(fp, studt);
        fclose(fp);
        printf("File Scritto\n");
        
    }
}

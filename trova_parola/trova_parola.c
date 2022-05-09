#include <stdio.h>
#include "string_manip.h"

/*
 * Enigmistica - Parole intrecciate. 
 * Scrivere una funzione che, data una tabella di caratteri
 * di dimensione 13x15 e una stringa, cerchi se la stringa
 * appare nella tabella: la stringa può apparire scritta:
 * 
 * 1) in orizzontale da sinistra a destra 
 * 2) in orizzontale da destra a sinistra
 * 
 * Se la parola è presente nella tabella, restituire le sue
 * coordinate; se la parola non
 * compare, utilizzare le coordinate -1,-1. 
 * Nel main utilizzare il seguente frammento di codice per 
 * stampare il risultato:
    // gli interi x,y contengono le coordinate,
    // dir è un intero che rappresenta la direzione del match (0 se è da sinistra a destra, 1 viceversa) 
    // parola la parola da cercare
    printf("Parola %s ", parola);
    if (x != -1)
        printf("in (%d,%d), direzione %s\n", x, y, dir==0?"s->d":"d->s");
    else
        printf("non trovata\n");;
 * 
 * Ad esempio nella tabella fornita sotto, se
 * parola_cercata = "Riposo"; allora stampa
    Parola Riposo in (1,0), direzione s->d
 * ATTENZIONE: le parole fornite possono avere sia lettere maiuscole che minuscole
 *             mentre la tabella contiene solo caratteri maiuscoli
 */

// -1 -1 non trovata s->d 
// funzione che trova il pattern di una stringa
// funzione che inverte stringhe
//

int trova(char parola[16], char table[13][16], 
        int *x, int *y, int *dir){

	int i;
	int parola_len = len(parola), string_len = len(table[0]);
	//char temp[parola_len];

  //printf("Controllo della tabella da sinistra a destra...\n"); 
	
	for (i = 0; i < 13; ++i) {
		
    if(string_manipulation(parola, table[i],
            parola_len, string_len, *dir) != -1 ){
        //printf("Match in Row %d\n", i);
        *x = i;
        *y = string_manipulation(parola, table[i], 
                parola_len, string_len, *dir);
        return 1; 
        }

    }

  
  *dir = 1; // cambio la direzione da destra a sinistra
  //printf("Controllo della tabella da destra a sinistra...\n"); 


  for (i = 0; i < 13; ++i) {
		
    reverse_string(table[i], string_len);
    if(string_manipulation(parola, table[i],
            parola_len, string_len, *dir) != -1 ){
        printf("Match in Row %d\n", i);
        *x = i;
        *y = string_manipulation(parola, table[i], 
                parola_len, string_len, *dir);
        return 1; 
        }

    }


    *x = -1;
    *y = -1;
    return 0;

}


int main(void) {

    char tabella[13][16] = { 
        {"EISEOPIDLNOTETM"},
        {"RIPOSOTICUCBAOI"},
        {"ETROPSIVOOINMRL"},
        {"RSINNETIITGSFAA"},
        {"ROCKSPCNTOIOOLM"},
        {"OLAUOSSABLLIRLI"},
        {"CAMPINGZCBDAUYN"},
        {"BCOLLEZIONISMOA"},
        {"ALTIROCONLARCOB"},
        {"LAOIGGANIDRAIGM"},
        {"LIBGCINEMAIERLA"},
        {"OROTALIGUPORITS"},
        {"OTENOIZAMROFNIE"}
        };

    int x, y, dir = 0;
    char parola[16];

    scanf("%255s", parola);
    
    //codice qui
    to_upper(parola);
		
		trova(parola, tabella, &x, &y, &dir);
    
	
    printf("Parola %s ", parola);
    if (x != -1)
    printf("in (%d,%d), direzione %s\n",
				x, y, dir==0?"s->d":"d->s");
    else
        printf("non trovata\n");

	
	return 0;
}

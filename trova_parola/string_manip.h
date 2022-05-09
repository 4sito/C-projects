//string manipulation tool


#ifndef STRING_MANIP_H
#define STRING_MANIP_H

int len(char *N);
// questa funzione restituisce il valore intero 
// della	lunghezza della stringa passata come argomento

int check_match(char parola[16], 
		char temp[16], int parola_len);

int string_manipulation(char parola[16], char table[16],
		int parola_len, int string_len, int dir);


void reverse_string(char string[16], int string_len);

void to_upper(char string[16]);

#endif

#include <stdio.h>

int len(char* N){

    int str_len = 0;

    while( N[str_len] != '\0'){
          str_len++;
    }

    //printf("Lunghezza stringa: %d\n", str_len);

    return str_len ;

}

int check_match(char parola[16],
        char temp[16], int parola_len){

    int i, acc=0;

    for (i = 0; i < parola_len; ++i) {

        if(parola[i] != temp[i])
          return 0;    
        acc++;
    }

    if(acc == parola_len)
        return 1;

    return 0;

}

int string_manipulation(char parola[16], char table[16],
        int parola_len, int string_len, int dir){

  char temp[16];
  int i,j;

  for (i = 0; i < string_len; ++i) {
      //printf("%d, %d, %d\n", i, string_len, parola_len);
      if (dir == 0) {
      
        if(i > string_len - parola_len)
          return -1;
      }
      
      /*
       * else if(dir == 1){
      
        if(i > string_len + parola_len)
          return -1; 
      }
      */

      //printf("i:%d str:%d par:%d str-par:%d\n", i, 
      //    string_len, parola_len, string_len-parola_len); 

      for (j = 0; j < parola_len; ++j) {
            //printf("%c", *(table+i+j));
            temp[j] = *(table+i+j);

      }
      //printf("\n");
        //printf("%d: %s == %s\n",i, temp, parola);
        if(check_match(parola, temp, parola_len) == 1){
            //printf("match in column %d\n", i);

            if( dir == 0)
              return i;
            else 
              return string_len - i;
            }
        temp[0] = '\0';

  }

  return -1;

}

void reverse_string(char string[16], int len){
  char r_table[16];
  int i, j = len;

  // printf("%d\n", len);
  for (i = 0; i < len+1; ++i) {
  
    r_table[j] = string[i];
    //printf("%c", string[i]);
    j--;

    }


 for (i = 0; i < len+1; ++i) {
   
   string[i] = r_table[i];
   //printf("%c", string[i]);

 } 

 //printf("\n");

  return;
}

void to_upper(char string[16]){
   
  //printf("stringa inzio: %s\n", string);
  
  int ascii_int, i = 0;
  
  while(string[i] != '\0'){

  ascii_int = (int) string[i];
  
  //printf("%d, %c\n", ascii_int, string[i]);
  
  if ( ( ascii_int >=97 && ascii_int <= 122)) {
  // converto da lower ad uppercase
  string[i] = string[i] - 32;
  
    }
  i++;
  }

  //printf("stringa convertita: %s\n", string);
  return;
}

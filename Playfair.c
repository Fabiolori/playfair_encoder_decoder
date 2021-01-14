//
// Created by Fabio Lori 2 on 13/01/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Playfair.h"


//TODO
void encode_file(key_t *key, char *input, char *output) {
    FILE* fin = fopen( input , "r" );
    FILE* fout = fopen( output , "w" );
    char buffer[256];
    while ( fgets(buffer,256,fin)  != NULL ) {
        fputs(encode_string(key,buffer,strlen(buffer)),fout);
    }
    fflush(fout);
    fclose(fin);
    fclose(fout);
}
// la chiave è cosi:
//<alfabeto>\r\n
//<char_mancante>\r\n
//<char_speciale>\r\n
//<chiave>\r\n

//TODO TOFIX
key_t* readkey  (char* file) {
    //svuoto la chiave
    //alphabet_t *first = NULL;
    //alphabet_t *last = NULL;
    FILE* keyfile = fopen( file , "r" );
    if (keyfile == NULL)
        exit(EXIT_FAILURE);
    char buffer[256];
    //TODO DA QUI IN POI LETTURA DI UNA RIGA ALLA VOLTA
    //TODO FIX LINE [25] nonn va bene
    char line [25] ;
   if ( fscanf(buffer,256,keyfile) != NULL ){

   }

    //    add_block(buffer,&first,&last);

    fclose(keyfile);
   return NULL;
   // return create_key(first);
}
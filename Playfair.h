//
// Created by Fabio Lori 2 on 13/01/2021.
//

#ifndef SOLAB2021_PLAYFAIR_H
#define SOLAB2021_PLAYFAIR_H
//TODO VEDI SE SERVE?
typedef struct alphabet {
    char *key;
    char alp [25];
} alphabet_t;

//Sono gli elementi chiave importati dal file Keyfile
typedef struct key {
    int index;
    alphabet_t *alphabet;
    char missingchar;
    char specialchar;
    char key [];
} key_t;


key_t* read_key(char* file);



//TODO
char* encode_string(key_t* key, char *data, int size);
char encode_char(key_t* key, char c);
void encode_file(key_t* key, char* input, char* output);
char* decode_string(key_t* key, char *data, int size);
char decode_char(key_t* key, char c);
void decode_file(key_t* key, char* input, char* output);
#endif //SOLAB2021_PLAYFAIR_H

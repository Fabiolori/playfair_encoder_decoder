//
// Created by Fabio Lori 2 on 12/01/2021.
//

#include <stdio.h>
#include <string.h>
#include "Playfair.h"



void printWelcome() {
    printf("Welcome to PlayFair! Write a command using the synthax below\n");
    printf("playfair (encode|decode) <keyfile> <outputdir> <file1> … <filen>\n");
}

void printWrong(){
    printf("Please try again using this command synthax\n");
    printf("playfair (encode|decode) <keyfile> <outputdir> <file1> … <filen>\n");
    //TODO AGGIUNGERE UNA SPIEGAZIONE MAGARI...
}

int main(int argc, char **argv) {
    if (argc <5) {
        printf("Wrong parameter number on command!\n\n", argc);
        printWrong();
        return -1;
    }
    //TODO Sostituisci vkey con il file key
    key_t *key = read_key(argv[2]);
    if (strcmp(argv[1], "encode")==0) {
        encode_file(argv[3], argv[4], key);
        return 0;
    }
    if (strcmp(argv[1], "decode")==0) {
        decode_file(argv[3], argv[4], key);
        return 0;
    }
    printf("Unknown command %s!\n",argv[1]);
    printWrong();
    return 0;
}

}
